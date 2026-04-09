// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dd2294
// Entry Point: 00dd2294
// Size: 648 bytes
// Signature: undefined FUN_00dd2294(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_00dd2294(float param_1,float param_2,long param_3,long param_4,uint param_5,uint param_6,
                 undefined8 param_7)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  ushort *puVar8;
  int iVar9;
  ulong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ushort uVar18;
  ushort uVar19;
  undefined4 local_7c;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  pvVar6 = (void *)dtAlloc(param_5 << 4,1);
  if (0 < (int)param_5) {
    iVar9 = 0;
    uVar10 = 0;
    do {
      uVar15 = param_6 * 2 * (int)uVar10;
      puVar1 = (ushort *)((long)pvVar6 + uVar10 * 0x10);
      uVar7 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
      *(int *)(puVar1 + 6) = (int)uVar10;
      uVar19 = *(ushort *)(param_3 + (ulong)*(ushort *)(param_4 + uVar7) * 6);
      puVar1[3] = uVar19;
      *puVar1 = uVar19;
      uVar13 = *(ushort *)(param_3 + (ulong)*(ushort *)(param_4 + uVar7) * 6 + 2);
      uVar16 = (uint)uVar13;
      puVar11 = puVar1 + 4;
      *puVar11 = uVar13;
      puVar12 = puVar1 + 1;
      *puVar12 = uVar13;
      uVar13 = *(ushort *)(param_3 + (ulong)*(ushort *)(param_4 + uVar7) * 6 + 4);
      puVar1[5] = uVar13;
      puVar1[2] = uVar13;
      uVar15 = uVar16;
      if (1 < (int)param_6) {
        puVar8 = (ushort *)(param_4 + 2 + (long)iVar9 * 2);
        lVar17 = (ulong)param_6 - 1;
        uVar18 = uVar13;
        uVar14 = uVar19;
        do {
          uVar2 = *puVar8;
          if ((ulong)uVar2 == 0xffff) break;
          uVar3 = *(ushort *)(param_3 + (ulong)uVar2 * 6);
          uVar4 = *(ushort *)(param_3 + (ulong)((uint)uVar2 * 3 + 1) * 2);
          uVar2 = *(ushort *)(param_3 + (ulong)((uint)uVar2 * 3 + 2) * 2);
          if (uVar3 < uVar19) {
            *puVar1 = uVar3;
            uVar19 = uVar3;
          }
          if (uVar4 < uVar16) {
            *puVar12 = uVar4;
            uVar16 = (uint)uVar4;
          }
          if (uVar2 < uVar13) {
            puVar1[2] = uVar2;
            uVar13 = uVar2;
          }
          if (uVar14 < uVar3) {
            puVar1[3] = uVar3;
            uVar14 = uVar3;
          }
          if (uVar15 < uVar4) {
            *puVar11 = uVar4;
            uVar15 = (uint)uVar4;
          }
          if (uVar18 < uVar2) {
            puVar1[5] = uVar2;
            uVar18 = uVar2;
          }
          puVar8 = puVar8 + 1;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + param_6 * 2;
      *puVar12 = (ushort)(int)(((float)(ulong)uVar16 * param_2) / param_1);
      *puVar11 = (ushort)(int)(((float)(ulong)uVar15 * param_2) / param_1);
    } while (uVar10 != param_5);
  }
  local_7c = 0;
  FUN_00dd2a98(pvVar6,0,param_5,&local_7c,param_7);
  dtFree(pvVar6);
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


