ifeq ($(subdir),stdlib)
gen-as-const-headers += ucontext_i.sym ow_ucontext_i.sym
sysdep_routines += \
  ow_swapcontext \
  ow_makecontext \
  ow_getcontext \
  ow_setcontext \
  # sysdep_routines
endif

ifeq ($(subdir),signal)
sysdep_routines += \
  ow_sigisempty \
  ow_sigismem \
  ow_sigaddset \
  ow_sigfillset \
  ow_sigempty \
  ow_sigdelset \
  ow_sigandset \
  ow_sigorset \
  # sysdep_routines
endif

ifeq ($(subdir),nptl)
sysdep-CFLAGS += -DCOMP_CHANGED_PTHREAD_STACK_MIN
endif

abi-variants := ilp32s ilp32d lp64s lp64d

ifeq (,$(filter $(default-abi),$(abi-variants)))
$(error Unknown ABI $(default-abi), must be one of $(abi-variants))
endif

abi-ilp32s-condition	:= __WORDSIZE == 32 && defined __loongarch_soft_float
abi-ilp32d-condition	:= __WORDSIZE == 32 && defined __loongarch_double_float
abi-lp64s-condition	:= __WORDSIZE == 64 && defined __loongarch_soft_float
abi-lp64d-condition	:= __WORDSIZE == 64 && defined __loongarch_double_float

# Align THP tests to 32MB.
THP-PAGE-SIZE = 0x2000000
