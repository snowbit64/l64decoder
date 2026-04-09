// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e266d4
// Entry Point: 00e266d4
// Size: 1012 bytes
// Signature: undefined FUN_00e266d4(void)


void FUN_00e266d4(long **param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  void *pvVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  size_t __n;
  uint uVar9;
  ushort *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined2 *puVar15;
  ushort *puVar16;
  ulong uVar17;
  uint uVar18;
  void **ppvVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar3 = *(uint *)(param_1 + 10);
  uVar6 = *(uint *)((long)param_1 + 0xb4);
  uVar9 = uVar3;
  do {
    uVar20 = *(uint *)((long)param_1 + 0xac);
    uVar18 = *(int *)(param_1 + 0xd) - (uVar6 + uVar20);
    if ((uVar3 - 0x106) + uVar9 <= uVar20) {
      memcpy(param_1[0xc],(void *)((long)param_1[0xc] + (ulong)uVar3),(ulong)(uVar3 - uVar18));
      uVar6 = *(uint *)(param_1 + 10);
      uVar9 = *(uint *)((long)param_1 + 0x84);
      uVar14 = (ulong)uVar9;
      uVar20 = (int)*(undefined8 *)((long)param_1 + 0xac) - uVar3;
      puVar10 = (ushort *)((long)param_1[0xf] + (ulong)uVar9 * 2);
      *(ulong *)((long)param_1 + 0xac) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0xac) >> 0x20) - uVar3,uVar20);
      param_1[0x13] = (long *)((long)param_1[0x13] - (ulong)uVar3);
      if (uVar9 - 1 < 3) {
LAB_00e267fc:
        do {
          puVar10 = puVar10 + -1;
          uVar1 = 0;
          if (uVar6 <= *puVar10) {
            uVar1 = *puVar10 - (short)uVar6;
          }
          uVar9 = uVar9 - 1;
          *puVar10 = uVar1;
        } while (uVar9 != 0);
      }
      else {
        uVar17 = (ulong)(uVar9 - 1) + 1;
        uVar13 = uVar17 & 0x1fffffffc;
        uVar9 = uVar9 - (int)uVar13;
        puVar10 = puVar10 + -uVar13;
        puVar15 = (undefined2 *)((long)param_1[0xf] + uVar14 * 2 + -4);
        uVar14 = uVar13;
        do {
          uVar14 = uVar14 - 4;
          uVar21 = NEON_uqsub((ulong)CONCAT24(*puVar15,(uint)(ushort)puVar15[1]),
                              CONCAT44(uVar6,uVar6),4);
          uVar22 = NEON_uqsub((ulong)CONCAT24(puVar15[-2],(uint)(ushort)puVar15[-1]),
                              CONCAT44(uVar6,uVar6),4);
          uVar21 = NEON_rev64(uVar21,4);
          uVar22 = NEON_rev64(uVar22,4);
          *puVar15 = (short)uVar21;
          puVar15[-2] = (short)uVar22;
          puVar15[1] = (short)((ulong)uVar21 >> 0x20);
          puVar15[-1] = (short)((ulong)uVar22 >> 0x20);
          puVar15 = puVar15 + -4;
        } while (uVar14 != 0);
        if (uVar17 != uVar13) goto LAB_00e267fc;
      }
      puVar10 = (ushort *)((long)param_1[0xe] + (ulong)uVar6 * 2);
      uVar9 = uVar6;
      if (uVar6 - 1 < 3) {
LAB_00e268b8:
        do {
          puVar10 = puVar10 + -1;
          uVar1 = 0;
          if (uVar6 <= *puVar10) {
            uVar1 = *puVar10 - (short)uVar6;
          }
          uVar9 = uVar9 - 1;
          *puVar10 = uVar1;
        } while (uVar9 != 0);
      }
      else {
        uVar14 = (ulong)(uVar6 - 1) + 1;
        uVar13 = uVar14 & 0x1fffffffc;
        puVar16 = puVar10 + -2;
        uVar17 = uVar13;
        do {
          uVar17 = uVar17 - 4;
          uVar21 = NEON_uqsub((ulong)CONCAT24(*puVar16,(uint)puVar16[1]),CONCAT44(uVar6,uVar6),4);
          uVar22 = NEON_uqsub((ulong)CONCAT24(puVar16[-2],(uint)puVar16[-1]),CONCAT44(uVar6,uVar6),4
                             );
          uVar21 = NEON_rev64(uVar21,4);
          uVar22 = NEON_rev64(uVar22,4);
          *puVar16 = (ushort)uVar21;
          puVar16[-2] = (ushort)uVar22;
          puVar16[1] = (ushort)((ulong)uVar21 >> 0x20);
          puVar16[-1] = (ushort)((ulong)uVar22 >> 0x20);
          puVar16 = puVar16 + -4;
        } while (uVar17 != 0);
        uVar9 = uVar6 - (int)uVar13;
        puVar10 = puVar10 + -uVar13;
        if (uVar14 != uVar13) goto LAB_00e268b8;
      }
      uVar18 = uVar3 + uVar18;
    }
    ppvVar19 = (void **)*param_1;
    uVar9 = *(uint *)(ppvVar19 + 1);
    if (uVar9 == 0) {
LAB_00e26a2c:
      plVar12 = param_1[0x2e7];
      plVar11 = param_1[0xd];
      uVar14 = (long)plVar11 - (long)plVar12;
      if (plVar12 <= plVar11 && uVar14 != 0) {
        plVar7 = (long *)((ulong)*(uint *)((long)param_1 + 0xb4) +
                         (ulong)*(uint *)((long)param_1 + 0xac));
        if (plVar12 < plVar7) {
          __n = (long)plVar11 - (long)plVar7;
          if (0x101 < __n) {
            __n = 0x102;
          }
          memset((void *)((long)param_1[0xc] + (long)plVar7),0,__n);
          plVar7 = (long *)(__n + (long)plVar7);
        }
        else {
          uVar17 = (long)(long *)((long)plVar7 + 0x102U) - (long)plVar12;
          if ((long *)((long)plVar7 + 0x102U) < plVar12 || uVar17 == 0) {
            return;
          }
          if (uVar17 <= uVar14) {
            uVar14 = uVar17;
          }
          memset((void *)((long)param_1[0xc] + (long)plVar12),0,uVar14 & 0xffffffff);
          plVar7 = (long *)((long)param_1[0x2e7] + uVar14);
        }
        param_1[0x2e7] = plVar7;
      }
      return;
    }
    uVar6 = *(uint *)((long)param_1 + 0xb4);
    if (uVar9 <= uVar18) {
      uVar18 = uVar9;
    }
    uVar14 = (ulong)uVar18;
    if (uVar18 != 0) {
      plVar12 = param_1[0xc];
      *(uint *)(ppvVar19 + 1) = uVar9 - uVar18;
      pvVar5 = (void *)((long)plVar12 + (ulong)uVar6 + (ulong)uVar20);
      memcpy(pvVar5,*ppvVar19,uVar14);
      if (*(int *)((long)ppvVar19[7] + 0x30) == 2) {
        pvVar5 = (void *)crc32(ppvVar19[0xc],pvVar5,uVar14);
LAB_00e26954:
        ppvVar19[0xc] = pvVar5;
      }
      else if (*(int *)((long)ppvVar19[7] + 0x30) == 1) {
        pvVar5 = (void *)adler32(ppvVar19[0xc],pvVar5,uVar14);
        goto LAB_00e26954;
      }
      uVar6 = *(uint *)((long)param_1 + 0xb4);
      *ppvVar19 = (void *)((long)*ppvVar19 + uVar14);
      ppvVar19[2] = (void *)((long)ppvVar19[2] + uVar14);
    }
    iVar8 = *(int *)((long)param_1 + 0x172c);
    uVar6 = uVar6 + uVar18;
    *(uint *)((long)param_1 + 0xb4) = uVar6;
    if (2 < iVar8 + uVar6) {
      plVar12 = param_1[0xc];
      uVar9 = *(int *)((long)param_1 + 0xac) - iVar8;
      bVar4 = *(byte *)((long)plVar12 + (ulong)uVar9);
      *(uint *)(param_1 + 0x10) = (uint)bVar4;
      uVar20 = *(uint *)((long)param_1 + 0x8c);
      uVar2 = *(uint *)(param_1 + 0x12);
      uVar18 = ((uint)bVar4 << (ulong)(uVar2 & 0x1f) ^
               (uint)*(byte *)((long)plVar12 + (ulong)(uVar9 + 1))) & uVar20;
      uVar14 = (ulong)uVar18;
      *(uint *)(param_1 + 0x10) = uVar18;
      do {
        if (iVar8 == 0) break;
        plVar11 = param_1[0xf];
        iVar8 = iVar8 + -1;
        bVar4 = *(byte *)((long)plVar12 + (ulong)(uVar9 + 2));
        *(int *)((long)param_1 + 0x172c) = iVar8;
        uVar18 = ((int)uVar14 << (ulong)(uVar2 & 0x1f) ^ (uint)bVar4) & uVar20;
        uVar14 = (ulong)uVar18;
        *(uint *)(param_1 + 0x10) = uVar18;
        *(undefined2 *)((long)param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar9) * 2) =
             *(undefined2 *)((long)plVar11 + uVar14 * 2);
        *(short *)((long)plVar11 + uVar14 * 2) = (short)uVar9;
        uVar9 = uVar9 + 1;
      } while (2 < uVar6 + iVar8);
    }
    if ((0x105 < uVar6) || (*(int *)(*param_1 + 1) == 0)) goto LAB_00e26a2c;
    uVar9 = *(uint *)(param_1 + 10);
  } while( true );
}


