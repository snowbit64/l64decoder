// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f11180
// Entry Point: 00f11180
// Size: 252 bytes
// Signature: undefined FUN_00f11180(void)


void FUN_00f11180(byte *param_1,double *param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  double dVar6;
  byte *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  dVar6 = strtod((char *)param_1,(char **)&local_40);
  *param_2 = dVar6;
  if (local_40 != param_1) {
    bVar1 = *local_40;
    if ((bVar1 | 0x20) == 0x78) {
      uVar4 = strtoul((char *)param_1,(char **)&local_40,0x10);
      *param_2 = (double)(unkuint9)uVar4;
      bVar1 = *local_40;
    }
    uVar5 = (uint)bVar1;
    if (uVar5 == 0) {
      bVar3 = true;
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return;
      }
      goto LAB_00f11278;
    }
    if ((uVar5 == 0x20) || (0xfffffffa < uVar5 - 0xe)) {
      do {
        local_40 = local_40 + 1;
        bVar1 = *local_40;
        uVar5 = (uint)bVar1;
      } while ((uVar5 == 0x20 || 0xfffffff9 < uVar5 - 0xe) &&
               (uVar5 == 0x20 || uVar5 - 0xe != 0xfffffffa));
      bVar3 = bVar1 == 0;
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return;
      }
      goto LAB_00f11278;
    }
  }
  bVar3 = false;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00f11278:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


