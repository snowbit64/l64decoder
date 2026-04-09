// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_decode_frame
// Entry Point: 00e65268
// Size: 472 bytes
// Signature: undefined silk_decode_frame(void)


undefined8
silk_decode_frame(long param_1,undefined8 param_2,void *param_3,int *param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  void *__dest;
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uStack_104;
  undefined auStack_100 [136];
  undefined4 local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = *(int *)(param_1 + 0x918);
  local_78 = 0;
  if (param_5 == 2) {
    uVar4 = (ulong)*(int *)(param_1 + 0x960);
    if (*(int *)(param_1 + uVar4 * 4 + 0x980) != 1) goto LAB_00e65374;
  }
  else {
    if (param_5 != 0) {
LAB_00e65374:
      *(char *)(param_1 + 0xae5) = (char)*(undefined4 *)(param_1 + 0x105c);
      silk_PLC(param_1,auStack_100,param_3,1,param_7);
      goto LAB_00e65394;
    }
    uVar4 = (ulong)*(uint *)(param_1 + 0x960);
  }
  silk_decode_indices(param_1,param_2,uVar4,param_5,param_6);
  silk_decode_pulses(param_2,auStack_100 + ((long)iVar1 + 0xfU & 0x7ffffffffffffff0) * -2,
                     (long)*(char *)(param_1 + 0xae5),(long)*(char *)(param_1 + 0xae6),
                     *(undefined4 *)(param_1 + 0x918));
  silk_decode_parameters(param_1,auStack_100,param_6);
  silk_decode_core(param_1,auStack_100,param_3,
                   auStack_100 + ((long)iVar1 + 0xfU & 0x7ffffffffffffff0) * -2,param_7);
  silk_PLC(param_1,auStack_100,param_3,0,param_7);
  *(undefined4 *)(param_1 + 0x1058) = 0;
  *(undefined4 *)(param_1 + 0x948) = 0;
  *(int *)(param_1 + 0x105c) = (int)*(char *)(param_1 + 0xae5);
LAB_00e65394:
  __dest = (void *)(param_1 + 0x544);
  uVar2 = *(int *)(param_1 + 0x920) - *(int *)(param_1 + 0x918);
  uVar4 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
  memmove(__dest,(void *)((long)__dest + (long)*(int *)(param_1 + 0x918) * 2),uVar4);
  memcpy((void *)((long)__dest + uVar4),param_3,(long)*(int *)(param_1 + 0x918) << 1);
  silk_CNG(param_1,auStack_100,param_3,iVar1);
  silk_PLC_glue_frames(param_1,param_3,iVar1);
  *(undefined4 *)(param_1 + 0x904) = (&uStack_104)[*(int *)(param_1 + 0x914)];
  *param_4 = iVar1;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


