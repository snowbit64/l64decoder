// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_synthesis
// Entry Point: 00e1d3a8
// Size: 560 bytes
// Signature: undefined vorbis_synthesis(void)


undefined8 vorbis_synthesis(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int **ppiVar12;
  
  if (param_1 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1[0xd];
    if (lVar5 != 0) {
      lVar10 = *(long *)(lVar5 + 8);
      lVar5 = *(long *)(lVar5 + 0x88);
      if (lVar10 == 0) {
        iVar4 = 0;
        lVar11 = 0;
        bVar1 = true;
      }
      else {
        lVar11 = *(long *)(lVar10 + 0x30);
        iVar4 = 1;
        bVar1 = true;
      }
      goto joined_r0x00e1d4f0;
    }
  }
  iVar4 = (int)lVar5;
  lVar10 = 0;
  bVar1 = false;
  lVar5 = 0;
  lVar11 = 0;
joined_r0x00e1d4f0:
  if ((((param_1 != (long *)0x0) && (plVar9 = param_1 + 1, iVar4 != 0)) && (bVar1)) &&
     ((lVar5 != 0 && (lVar11 != 0)))) {
    _vorbis_block_ripcord(param_1);
    oggpack_readinit(plVar9,*param_2,*(undefined4 *)(param_2 + 1));
    lVar3 = oggpack_read(plVar9,1);
    if (lVar3 != 0) {
      return 0xffffff79;
    }
    uVar2 = oggpack_read(plVar9,*(undefined4 *)(lVar5 + 0x50));
    if (uVar2 != 0xffffffff) {
      *(uint *)((long)param_1 + 0x4c) = uVar2;
      ppiVar12 = (int **)(lVar11 + ((long)((ulong)uVar2 << 0x20) >> 0x1d) + 0x28);
      piVar6 = *ppiVar12;
      if (piVar6 != (int *)0x0) {
        iVar4 = *piVar6;
        param_1[7] = (long)iVar4;
        if (iVar4 == 0) {
          lVar5 = 0;
          param_1[6] = 0;
          param_1[8] = 0;
        }
        else {
          lVar5 = oggpack_read(plVar9,1);
          param_1[6] = lVar5;
          lVar5 = oggpack_read(plVar9,1);
          param_1[8] = lVar5;
          if (lVar5 == -1) {
            return 0xffffff78;
          }
          lVar5 = param_1[7];
        }
        iVar4 = *(int *)(lVar10 + 4);
        uVar7 = *(undefined8 *)(lVar11 + lVar5 * 8);
        lVar5 = param_2[4];
        uVar8 = param_2[3];
        param_1[0xc] = param_2[5];
        param_1[0xb] = lVar5;
        *(int *)(param_1 + 10) = (int)uVar8;
        *(int *)(param_1 + 9) = (int)uVar7;
        lVar5 = _vorbis_block_alloc(param_1,(long)iVar4 << 3);
        iVar4 = *(int *)(lVar10 + 4);
        *param_1 = lVar5;
        if (0 < iVar4) {
          lVar5 = 0;
          do {
            uVar7 = _vorbis_block_alloc(param_1,(long)*(int *)(param_1 + 9) << 2);
            iVar4 = *(int *)(lVar10 + 4);
            *(undefined8 *)(*param_1 + lVar5 * 8) = uVar7;
            lVar5 = lVar5 + 1;
          } while (lVar5 < iVar4);
        }
        lVar5 = (long)(*ppiVar12)[3];
                    /* WARNING: Could not recover jumptable at 0x00e1d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)((&_mapping_P)[*(int *)(lVar11 + lVar5 * 4 + 0x228)] + 0x20))
                          (param_1,*(undefined8 *)(lVar11 + lVar5 * 8 + 0x328));
        return uVar7;
      }
    }
    return 0xffffff78;
  }
  return 0xffffff78;
}


