#include <stdio.h>
#ifdef __GLIBC__
#include <gnu/libc-version.h>
#endif

#include <string>

#define IPEX_MAX_GLIBC_MAJOR        2
#define IPEX_MAX_GLIBC_MINOR        17

int check_glibc_version()
{
#ifdef __GLIBC__
  printf("GNU libc compile-time version: %u.%u\n", __GLIBC__, __GLIBC_MINOR__);
  printf("GNU libc runtime version:      %s\n", gnu_get_libc_version());

  if(__GLIBC__ <= IPEX_MAX_GLIBC_MAJOR && __GLIBC_MINOR__ <= IPEX_MAX_GLIBC_MINOR)
  {
    return 0;
  }
  return 1;
#else
  puts("Not the GNU C Library");
  return 1;
#endif
}

int check_abi()
{
#ifdef _GLIBCXX_USE_CXX11_ABI
  printf("_GLIBCXX_USE_CXX11_ABI: %d\n", _GLIBCXX_USE_CXX11_ABI) ;
  if(_GLIBCXX_USE_CXX11_ABI == 0)
  {
    return 0;
  }
  return 1;
#else
  printf("_GLIBCXX_USE_CXX11_ABI, not def.\n") ;
  return 1;
#endif    
}

int main(void)
{
    int status_glibc = check_glibc_version();
    printf("check glibc status: %s.\n", status_glibc? "failed":"passed");
    int status_abi = check_abi();
    printf("check abi status: %s.\n", status_abi? "failed":"passed");

    int sum_status = status_glibc | status_abi;
    return sum_status;
}