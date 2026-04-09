// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateVertexData
// Entry Point: 008f1d44
// Size: 380 bytes
// Signature: undefined __cdecl generateVertexData(uint param_1, IRenderDevice * param_2)


/* GeoMipMappingTerrainPatch::generateVertexData(unsigned int, IRenderDevice*) */

undefined8 GeoMipMappingTerrainPatch::generateVertexData(uint param_1,IRenderDevice *param_2)

{
  short *psVar1;
  short *psVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined8 uVar19;
  void *local_60;
  int local_58;
  undefined4 uStack_54;
  char *local_50;
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  pvVar8 = operator_new__((ulong)(param_1 * param_1) << 2);
  if (param_1 != 0) {
    uVar12 = 0;
    uVar11 = 0;
    uVar5 = param_1 & 0xfffffff0;
    do {
      uVar13 = 0;
      sVar10 = (short)uVar11;
      if (param_1 < 0x10) goto LAB_008f1e20;
      if (CARRY4(uVar12,param_1 - 1) != false) goto LAB_008f1e20;
      uVar4 = uVar12 + uVar5;
      uVar9 = 0x3000200010000;
      uVar19 = 0x7000600050004;
      uVar6 = uVar5;
      do {
        sVar14 = (short)uVar9;
        sVar15 = (short)((ulong)uVar9 >> 0x10);
        sVar16 = (short)((ulong)uVar9 >> 0x20);
        sVar17 = (short)((ulong)uVar9 >> 0x30);
        sVar18 = (short)uVar19;
        sVar20 = (short)((ulong)uVar19 >> 0x10);
        sVar21 = (short)((ulong)uVar19 >> 0x20);
        sVar22 = (short)((ulong)uVar19 >> 0x30);
        psVar1 = (short *)((long)pvVar8 + (ulong)uVar12 * 4);
        uVar13 = uVar12 + 8;
        uVar6 = uVar6 - 0x10;
        uVar12 = uVar12 + 0x10;
        psVar2 = (short *)((long)pvVar8 + (ulong)uVar13 * 4);
        *psVar1 = sVar14;
        psVar1[1] = sVar10;
        psVar1[2] = sVar15;
        psVar1[3] = sVar10;
        psVar1[4] = sVar16;
        psVar1[5] = sVar10;
        psVar1[6] = sVar17;
        psVar1[7] = sVar10;
        psVar1[8] = sVar18;
        psVar1[9] = sVar10;
        psVar1[10] = sVar20;
        psVar1[0xb] = sVar10;
        psVar1[0xc] = sVar21;
        psVar1[0xd] = sVar10;
        psVar1[0xe] = sVar22;
        psVar1[0xf] = sVar10;
        uVar9 = CONCAT26(sVar17 + 0x10,CONCAT24(sVar16 + 0x10,CONCAT22(sVar15 + 0x10,sVar14 + 0x10))
                        );
        uVar19 = CONCAT26(sVar22 + 0x10,
                          CONCAT24(sVar21 + 0x10,CONCAT22(sVar20 + 0x10,sVar18 + 0x10)));
        *psVar2 = sVar14 + 8;
        psVar2[1] = sVar10;
        psVar2[2] = sVar15 + 8;
        psVar2[3] = sVar10;
        psVar2[4] = sVar16 + 8;
        psVar2[5] = sVar10;
        psVar2[6] = sVar17 + 8;
        psVar2[7] = sVar10;
        psVar2[8] = sVar18 + 8;
        psVar2[9] = sVar10;
        psVar2[10] = sVar20 + 8;
        psVar2[0xb] = sVar10;
        psVar2[0xc] = sVar21 + 8;
        psVar2[0xd] = sVar10;
        psVar2[0xe] = sVar22 + 8;
        psVar2[0xf] = sVar10;
        uVar13 = uVar5;
      } while (uVar6 != 0);
      for (; uVar12 = uVar4, uVar13 != param_1; uVar13 = uVar13 + 1) {
LAB_008f1e20:
        puVar3 = (undefined2 *)((long)pvVar8 + (ulong)uVar12 * 4);
        *puVar3 = (short)uVar13;
        puVar3[1] = sVar10;
        uVar4 = uVar12 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_1);
  }
  local_58 = param_1 * param_1 * 4;
  uStack_54 = 1;
  local_50 = "GeoMipMappingTerrainPatch";
  local_60 = pvVar8;
  uVar9 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
  uVar9 = (**(code **)(*(long *)param_2 + 0x108))(param_2,uVar9,&local_60);
  operator_delete__(pvVar8);
  if (*(long *)(lVar7 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


