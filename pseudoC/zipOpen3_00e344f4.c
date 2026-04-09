// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zipOpen3
// Entry Point: 00e344f4
// Size: 476 bytes
// Signature: undefined zipOpen3(void)


/* WARNING: Removing unreachable block (ram,0x00e34664) */

void * zipOpen3(undefined8 param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *__dest;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_10200;
  undefined8 uStack_101f8;
  undefined8 uStack_101f0;
  undefined8 uStack_101e8;
  undefined8 uStack_101e0;
  code *pcStack_101d8;
  undefined8 uStack_101d0;
  undefined8 uStack_101c8;
  undefined8 uStack_101c0;
  undefined8 uStack_101b8;
  undefined8 uStack_101b0;
  long lStack_101a8;
  undefined8 uStack_101a0;
  undefined8 uStack_10198;
  undefined4 uStack_10190;
  undefined4 uStack_10118;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  uStack_101b8 = 0;
  uStack_101b0 = 0;
  if (param_4 == (undefined8 *)0x0) {
    fill_fopen64_filefunc(&uStack_10200);
  }
  else {
    pcStack_101d8 = (code *)param_4[5];
    uStack_101e0 = param_4[4];
    uStack_101c8 = param_4[7];
    uStack_101d0 = param_4[6];
    uStack_101b8 = param_4[9];
    uStack_101c0 = param_4[8];
    uStack_101f8 = param_4[1];
    uStack_10200 = *param_4;
    uStack_101e8 = param_4[3];
    uStack_101f0 = param_4[2];
    uStack_101b0 = param_4[10];
  }
  uVar2 = 0xb;
  if (param_2 != 0) {
    uVar2 = 7;
  }
  lStack_101a8 = call_zopen64(&uStack_10200,param_1,uVar2);
  if (lStack_101a8 == 0) {
    __dest = (void *)0x0;
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  else {
    if (param_2 == 1) {
      call_zseek64(&uStack_10200,lStack_101a8,0,2);
    }
    call_ztell64(&uStack_10200,lStack_101a8);
    uStack_10118 = 0;
    __dest = malloc(0x101a0);
    uStack_10190 = 0;
    uStack_10198 = 0;
    uStack_101a0 = 0;
    if (__dest == (void *)0x0) {
      (*pcStack_101d8)(uStack_101c8,lStack_101a8);
      lVar4 = *(long *)(lVar4 + 0x28);
    }
    else {
      if (param_2 == 2) {
        iVar1 = LoadCentralDirectoryRecord(&uStack_10200);
      }
      else {
        iVar1 = 0;
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = 0;
      }
      if (iVar1 == 0) {
        memcpy(__dest,&uStack_10200,0x101a0);
        lVar4 = *(long *)(lVar4 + 0x28);
      }
      else {
        free(__dest);
        __dest = (void *)0x0;
        lVar4 = *(long *)(lVar4 + 0x28);
      }
    }
  }
  if (lVar4 != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __dest;
}


