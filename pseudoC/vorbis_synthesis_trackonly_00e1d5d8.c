// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_synthesis_trackonly
// Entry Point: 00e1d5d8
// Size: 280 bytes
// Signature: undefined vorbis_synthesis_trackonly(void)


undefined8 vorbis_synthesis_trackonly(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = param_1 + 1;
  lVar8 = *(long *)(param_1[0xd] + 0x88);
  lVar7 = *(long *)(*(long *)(param_1[0xd] + 8) + 0x30);
  _vorbis_block_ripcord();
  oggpack_readinit(puVar1,*param_2,*(undefined4 *)(param_2 + 1));
  lVar4 = oggpack_read(puVar1,1);
  if (lVar4 != 0) {
    return 0xffffff79;
  }
  uVar3 = oggpack_read(puVar1,*(undefined4 *)(lVar8 + 0x50));
  if (uVar3 != 0xffffffff) {
    *(uint *)((long)param_1 + 0x4c) = uVar3;
    piVar6 = *(int **)(lVar7 + ((long)((ulong)uVar3 << 0x20) >> 0x1d) + 0x28);
    if (piVar6 != (int *)0x0) {
      iVar2 = *piVar6;
      param_1[7] = (long)iVar2;
      if (iVar2 == 0) {
        param_1[6] = 0;
        param_1[8] = 0;
      }
      else {
        uVar5 = oggpack_read(puVar1,1);
        param_1[6] = uVar5;
        lVar4 = oggpack_read(puVar1,1);
        param_1[8] = lVar4;
        if (lVar4 == -1) {
          return 0xffffff78;
        }
      }
      uVar10 = param_2[5];
      uVar9 = param_2[4];
      uVar5 = param_2[3];
      *(undefined4 *)(param_1 + 9) = 0;
      *param_1 = 0;
      param_1[0xc] = uVar10;
      param_1[0xb] = uVar9;
      *(int *)(param_1 + 10) = (int)uVar5;
      return 0;
    }
  }
  return 0xffffff78;
}


