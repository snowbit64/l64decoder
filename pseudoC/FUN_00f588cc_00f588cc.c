// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f588cc
// Entry Point: 00f588cc
// Size: 856 bytes
// Signature: undefined FUN_00f588cc(void)


uint FUN_00f588cc(long param_1,undefined4 param_2,int param_3)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  int local_64;
  undefined auStack_60 [4];
  int local_5c;
  long local_58;
  int local_4c;
  int iStack_48;
  undefined auStack_44 [4];
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  (**(code **)(**(long **)(param_1 + 8) + 0x20))
            (*(long **)(param_1 + 8),&local_40,auStack_44,&iStack_48,&local_4c,&local_58,&local_5c,
             auStack_60,&local_64,param_2);
  lVar4 = *(long *)(param_1 + 8);
  puVar6 = (uint *)(local_58 + (long)local_5c * (long)param_3);
  lVar5 = (long)local_4c;
  if (iStack_48 == 0) {
    if (local_64 == 3) {
      uVar16 = *(undefined8 *)(lVar4 + 8);
      fVar17 = *(float *)(lVar4 + 0x10);
      puVar8 = (undefined8 *)(local_40 + lVar5 * (ulong)*(ushort *)(puVar6 + 1));
      uVar15 = *puVar8;
      fVar10 = *(float *)(puVar8 + 1);
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(ulong *)(param_1 + 0x38) =
           CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar15 >> 0x20),
                    (float)uVar16 * (float)uVar15);
      *(float *)(param_1 + 0x40) = fVar17 * fVar10;
      uVar16 = *(undefined8 *)(lVar4 + 8);
      fVar17 = *(float *)(lVar4 + 0x10);
      puVar8 = (undefined8 *)(local_40 + lVar5 * (ulong)*(ushort *)((long)puVar6 + 2));
      uVar15 = *puVar8;
      fVar10 = *(float *)(puVar8 + 1);
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(ulong *)(param_1 + 0x28) =
           CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar15 >> 0x20),
                    (float)uVar16 * (float)uVar15);
      *(float *)(param_1 + 0x30) = fVar17 * fVar10;
      uVar7 = (ulong)*(ushort *)puVar6;
    }
    else if (local_64 == 2) {
      uVar16 = *(undefined8 *)(lVar4 + 8);
      fVar17 = *(float *)(lVar4 + 0x10);
      puVar8 = (undefined8 *)(local_40 + lVar5 * (int)puVar6[2]);
      uVar15 = *puVar8;
      fVar10 = *(float *)(puVar8 + 1);
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(ulong *)(param_1 + 0x38) =
           CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar15 >> 0x20),
                    (float)uVar16 * (float)uVar15);
      *(float *)(param_1 + 0x40) = fVar17 * fVar10;
      uVar16 = *(undefined8 *)(lVar4 + 8);
      fVar17 = *(float *)(lVar4 + 0x10);
      puVar8 = (undefined8 *)(local_40 + lVar5 * (int)puVar6[1]);
      uVar15 = *puVar8;
      fVar10 = *(float *)(puVar8 + 1);
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(ulong *)(param_1 + 0x28) =
           CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar15 >> 0x20),
                    (float)uVar16 * (float)uVar15);
      *(float *)(param_1 + 0x30) = fVar17 * fVar10;
      uVar7 = (ulong)(int)*puVar6;
    }
    else {
      uVar16 = *(undefined8 *)(lVar4 + 8);
      fVar17 = *(float *)(lVar4 + 0x10);
      puVar8 = (undefined8 *)(local_40 + lVar5 * (ulong)*(byte *)((long)puVar6 + 2));
      uVar15 = *puVar8;
      fVar10 = *(float *)(puVar8 + 1);
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(ulong *)(param_1 + 0x38) =
           CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar15 >> 0x20),
                    (float)uVar16 * (float)uVar15);
      *(float *)(param_1 + 0x40) = fVar17 * fVar10;
      uVar16 = *(undefined8 *)(lVar4 + 8);
      fVar17 = *(float *)(lVar4 + 0x10);
      puVar8 = (undefined8 *)(local_40 + lVar5 * (ulong)*(byte *)((long)puVar6 + 1));
      uVar15 = *puVar8;
      fVar10 = *(float *)(puVar8 + 1);
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(ulong *)(param_1 + 0x28) =
           CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar15 >> 0x20),
                    (float)uVar16 * (float)uVar15);
      *(float *)(param_1 + 0x30) = fVar17 * fVar10;
      uVar7 = (ulong)*(byte *)puVar6;
    }
    puVar8 = (undefined8 *)(local_40 + lVar5 * uVar7);
    uVar16 = *puVar8;
    fVar17 = (float)*(undefined8 *)(lVar4 + 8) * (float)uVar16;
    fVar10 = (float)((ulong)*(undefined8 *)(lVar4 + 8) >> 0x20) * (float)((ulong)uVar16 >> 0x20);
    fVar12 = *(float *)(puVar8 + 1);
  }
  else {
    if (local_64 == 2) {
      uVar9 = puVar6[2];
    }
    else if (local_64 == 3) {
      uVar9 = (uint)*(ushort *)(puVar6 + 1);
    }
    else {
      uVar9 = (uint)*(byte *)((long)puVar6 + 2);
    }
    uVar16 = *(undefined8 *)(lVar4 + 8);
    fVar17 = *(float *)(lVar4 + 0x10);
    pdVar1 = (double *)(local_40 + (int)(local_4c * uVar9));
    dVar11 = pdVar1[1];
    dVar3 = *pdVar1;
    dVar13 = pdVar1[2];
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(ulong *)(param_1 + 0x38) =
         CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)dVar11,(float)uVar16 * (float)dVar3);
    *(float *)(param_1 + 0x40) = fVar17 * (float)dVar13;
    if (local_64 == 3) {
      uVar9 = (uint)*(ushort *)((long)puVar6 + 2);
    }
    else if (local_64 == 2) {
      uVar9 = puVar6[1];
    }
    else {
      uVar9 = (uint)*(byte *)((long)puVar6 + 1);
    }
    uVar16 = *(undefined8 *)(lVar4 + 8);
    fVar17 = *(float *)(lVar4 + 0x10);
    pdVar1 = (double *)(local_40 + (int)(local_4c * uVar9));
    dVar11 = pdVar1[1];
    dVar3 = *pdVar1;
    dVar13 = pdVar1[2];
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(ulong *)(param_1 + 0x28) =
         CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)dVar11,(float)uVar16 * (float)dVar3);
    *(float *)(param_1 + 0x30) = fVar17 * (float)dVar13;
    if (local_64 == 3) {
      uVar9 = (uint)*(ushort *)puVar6;
    }
    else if (local_64 == 2) {
      uVar9 = *puVar6;
    }
    else {
      uVar9 = (uint)*(byte *)puVar6;
    }
    pdVar1 = (double *)(local_40 + (int)(local_4c * uVar9));
    fVar17 = (float)*(undefined8 *)(lVar4 + 8) * (float)*pdVar1;
    fVar10 = (float)((ulong)*(undefined8 *)(lVar4 + 8) >> 0x20) * (float)pdVar1[1];
    fVar12 = (float)pdVar1[2];
  }
  fVar14 = *(float *)(lVar4 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = CONCAT44(fVar10,fVar17);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(float *)(param_1 + 0x20) = fVar14 * fVar12;
  uVar9 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                    (*(long **)(param_1 + 0x10),(undefined8 *)(param_1 + 0x18),param_2,param_3);
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),param_2);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


