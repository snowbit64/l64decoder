// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_open_backing_store
// Entry Point: 00d8eb80
// Size: 132 bytes
// Signature: undefined jpeg_open_backing_store(void)


void jpeg_open_backing_store(long *param_1,code **param_2)

{
  FILE *pFVar1;
  long lVar2;
  
  pFVar1 = tmpfile();
  param_2[3] = (code *)pFVar1;
  if (pFVar1 == (FILE *)0x0) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x41;
    __strncpy_chk2(lVar2 + 0x2c,&DAT_0050a39f,0x50,0x50,1);
    (**(code **)*param_1)(param_1);
  }
  *param_2 = FUN_00d8ec04;
  param_2[1] = FUN_00d8eca0;
  param_2[2] = FUN_00d8ed3c;
  return;
}


