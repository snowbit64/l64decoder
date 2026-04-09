// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startNavigationMeshNode
// Entry Point: 00942458
// Size: 476 bytes
// Signature: undefined __cdecl startNavigationMeshNode(void * param_1, char * param_2, char * * param_3)


/* I3DShapePoolFactory::startNavigationMeshNode(void*, char const*, char const**) */

void I3DShapePoolFactory::startNavigationMeshNode(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_c48 [64];
  int local_a48 [8];
  undefined8 auStack_a28 [124];
  undefined8 local_648 [64];
  uint local_448 [8];
  undefined8 auStack_428 [124];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar6 = (char *)ExpatUtil::getAttr("vi",param_3);
  pcVar7 = (char *)ExpatUtil::getAttr("ci",param_3);
  if (((pcVar7 == (char *)0x0) || (pcVar6 == (char *)0x0)) ||
     (*(long *)(*(long *)((long)param_1 + 0x270) + 0x48) == 0)) goto LAB_00942608;
  uVar8 = StringUtil::splitIntoUInts(pcVar6,local_448,0x100,' ');
  uVar4 = (uint)uVar8;
  if (uVar4 != 0) {
    if (uVar4 < 0x10) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar8 & 0xfffffff0;
      puVar14 = local_648 + 2;
      puVar12 = auStack_428;
      uVar16 = uVar10;
      do {
        uVar3 = puVar12[-3];
        uVar2 = puVar12[-4];
        uVar16 = uVar16 - 0x10;
        uVar20 = puVar12[1];
        uVar19 = *puVar12;
        uVar18 = puVar12[3];
        uVar17 = puVar12[2];
        puVar14[-1] = CONCAT26((short)((ulong)puVar12[-1] >> 0x20),
                               CONCAT24((short)puVar12[-1],
                                        CONCAT22((short)((ulong)puVar12[-2] >> 0x20),
                                                 (short)puVar12[-2])));
        puVar14[-2] = CONCAT26((short)((ulong)uVar3 >> 0x20),
                               CONCAT24((short)uVar3,
                                        CONCAT22((short)((ulong)uVar2 >> 0x20),(short)uVar2)));
        puVar14[1] = CONCAT26((short)((ulong)uVar18 >> 0x20),
                              CONCAT24((short)uVar18,
                                       CONCAT22((short)((ulong)uVar17 >> 0x20),(short)uVar17)));
        *puVar14 = CONCAT26((short)((ulong)uVar20 >> 0x20),
                            CONCAT24((short)uVar20,
                                     CONCAT22((short)((ulong)uVar19 >> 0x20),(short)uVar19)));
        puVar14 = puVar14 + 4;
        puVar12 = puVar12 + 8;
      } while (uVar16 != 0);
      if (uVar10 == (uVar8 & 0xffffffff)) goto LAB_00942554;
    }
    lVar9 = (uVar8 & 0xffffffff) - uVar10;
    puVar11 = local_448 + uVar10;
    puVar13 = (undefined2 *)((long)local_648 + uVar10 * 2);
    do {
      lVar9 = lVar9 + -1;
      *puVar13 = (short)*puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    } while (lVar9 != 0);
  }
LAB_00942554:
  uVar8 = StringUtil::splitIntoInts(pcVar7,local_a48,0x100,' ');
  uVar5 = (uint)uVar8;
  if (uVar5 != 0) {
    if (uVar5 < 0x10) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar8 & 0xfffffff0;
      puVar14 = local_c48 + 2;
      puVar12 = auStack_a28;
      uVar16 = uVar10;
      do {
        uVar3 = puVar12[-3];
        uVar2 = puVar12[-4];
        uVar16 = uVar16 - 0x10;
        uVar20 = puVar12[1];
        uVar19 = *puVar12;
        uVar18 = puVar12[3];
        uVar17 = puVar12[2];
        puVar14[-1] = CONCAT26((short)((ulong)puVar12[-1] >> 0x20),
                               CONCAT24((short)puVar12[-1],
                                        CONCAT22((short)((ulong)puVar12[-2] >> 0x20),
                                                 (short)puVar12[-2])));
        puVar14[-2] = CONCAT26((short)((ulong)uVar3 >> 0x20),
                               CONCAT24((short)uVar3,
                                        CONCAT22((short)((ulong)uVar2 >> 0x20),(short)uVar2)));
        puVar14[1] = CONCAT26((short)((ulong)uVar18 >> 0x20),
                              CONCAT24((short)uVar18,
                                       CONCAT22((short)((ulong)uVar17 >> 0x20),(short)uVar17)));
        *puVar14 = CONCAT26((short)((ulong)uVar20 >> 0x20),
                            CONCAT24((short)uVar20,
                                     CONCAT22((short)((ulong)uVar19 >> 0x20),(short)uVar19)));
        puVar14 = puVar14 + 4;
        puVar12 = puVar12 + 8;
      } while (uVar16 != 0);
      if (uVar10 == (uVar8 & 0xffffffff)) goto LAB_009425e4;
    }
    lVar9 = (uVar8 & 0xffffffff) - uVar10;
    puVar13 = (undefined2 *)((long)local_c48 + uVar10 * 2);
    piVar15 = local_a48 + uVar10;
    do {
      lVar9 = lVar9 + -1;
      *puVar13 = (short)*piVar15;
      puVar13 = puVar13 + 1;
      piVar15 = piVar15 + 1;
    } while (lVar9 != 0);
  }
LAB_009425e4:
  if (uVar4 == uVar5) {
    NavigationMesh::addNode
              (*(NavigationMesh **)(*(long *)((long)param_1 + 0x270) + 0x48),uVar4,
               (ushort *)local_648,(ushort *)local_c48,0.0);
  }
LAB_00942608:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


