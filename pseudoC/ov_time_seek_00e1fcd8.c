// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_time_seek
// Entry Point: 00e1fcd8
// Size: 292 bytes
// Signature: undefined ov_time_seek(void)


undefined8 ov_time_seek(double param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  if (1 < *(int *)(param_2 + 0x80)) {
    if (*(int *)(param_2 + 8) == 0) {
      return 0xffffff76;
    }
    if (0.0 <= param_1) {
      uVar2 = *(uint *)(param_2 + 0x40);
      if ((int)uVar2 < 1) {
        dVar8 = 0.0;
        lVar5 = 0;
        uVar4 = 0;
LAB_00e1fd94:
        if ((uint)uVar4 != uVar2) {
          dVar8 = (double)NEON_fmadd(param_1 - dVar8,
                                     (double)*(long *)(*(long *)(param_2 + 0x68) +
                                                       (uVar4 & 0xffffffff) * 0x38 + 8),
                                     (double)lVar5);
          uVar3 = ov_pcm_seek(param_2,(long)dVar8);
          return uVar3;
        }
      }
      else {
        uVar4 = 0;
        lVar5 = 0;
        lVar6 = 8;
        dVar8 = 0.0;
        do {
          dVar7 = (double)ov_time_total(param_2,uVar4 & 0xffffffff);
          if (param_1 < dVar8 + dVar7) goto LAB_00e1fd94;
          uVar4 = uVar4 + 1;
          plVar1 = (long *)(*(long *)(param_2 + 0x60) + lVar6);
          lVar6 = lVar6 + 0x10;
          lVar5 = *plVar1 + lVar5;
          dVar8 = dVar8 + dVar7;
        } while (uVar2 != uVar4);
      }
    }
  }
  return 0xffffff7d;
}


