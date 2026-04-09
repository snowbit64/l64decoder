// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_create_png_struct
// Entry Point: 00da8cc8
// Size: 388 bytes
// Signature: undefined png_create_png_struct(void)


void png_create_png_struct
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  void *__dest;
  __jmp_buf_tag _Stack_690;
  undefined auStack_590 [256];
  code *local_490;
  __jmp_buf_tag *local_488;
  undefined8 local_480;
  code *local_3d8;
  code *local_3d0;
  void *local_3c8;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  memset(auStack_590,0,0x528);
  local_12c = 1000;
  local_134 = 0xf4240000f4240;
  local_128 = 8000000;
  png_set_mem_fn(auStack_590,param_5,param_6,param_7);
  png_set_error_fn(auStack_590,param_2,param_3,param_4);
  iVar2 = setjmp(&_Stack_690);
  if (iVar2 == 0) {
    local_480 = 0;
    local_490 = longjmp;
    local_488 = &_Stack_690;
    iVar2 = png_user_version_check(auStack_590,param_1);
    if (iVar2 == 0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)png_malloc_warn(auStack_590,0x528);
      if (__dest != (void *)0x0) {
        local_488 = (__jmp_buf_tag *)0x0;
        local_480 = 0;
        local_3d8 = png_zalloc;
        local_3d0 = png_zfree;
        local_490 = (code *)0x0;
        local_3c8 = __dest;
        memcpy(__dest,auStack_590,0x528);
      }
    }
  }
  else {
    __dest = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__dest);
}


