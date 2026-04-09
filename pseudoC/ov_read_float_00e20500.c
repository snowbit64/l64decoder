// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_read_float
// Entry Point: 00e20500
// Size: 292 bytes
// Signature: undefined ov_read_float(void)


long ov_read_float(long param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 < 2) {
    lVar4 = -0x83;
  }
  else {
    while( true ) {
      if ((iVar2 == 4) && (iVar2 = vorbis_synthesis_pcmout(param_1 + 0x240,&local_60), iVar2 != 0))
      {
        uVar3 = vorbis_synthesis_halfrate_p(*(undefined8 *)(param_1 + 0x68));
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = local_60;
        }
        if (iVar2 <= param_3) {
          param_3 = iVar2;
        }
        lVar4 = (long)param_3;
        vorbis_synthesis_read(param_1 + 0x240);
        *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + (lVar4 << (uVar3 & 0x3f));
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = *(undefined4 *)(param_1 + 0x90);
        }
        goto LAB_00e205f0;
      }
      iVar2 = FUN_00e1f850(param_1,1);
      if (iVar2 == -2) {
        lVar4 = 0;
        goto LAB_00e205f0;
      }
      if (iVar2 < 1) break;
      iVar2 = *(int *)(param_1 + 0x80);
    }
    lVar4 = (long)iVar2;
  }
LAB_00e205f0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


