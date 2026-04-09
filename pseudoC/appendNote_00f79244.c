// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendNote
// Entry Point: 00f79244
// Size: 480 bytes
// Signature: undefined __thiscall appendNote(btSoftBody * this, char * param_1, btVector3 * param_2, btVector4 * param_3, Node * param_4, Node * param_5, Node * param_6, Node * param_7)


/* btSoftBody::appendNote(char const*, btVector3 const&, btVector4 const&, btSoftBody::Node*,
   btSoftBody::Node*, btSoftBody::Node*, btSoftBody::Node*) */

void __thiscall
btSoftBody::appendNote
          (btSoftBody *this,char *param_1,btVector3 *param_2,btVector4 *param_3,Node *param_4,
          Node *param_5,Node *param_6,Node *param_7)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  uVar7 = *(uint *)(this + 0x354);
  uVar11 = *(undefined8 *)(param_2 + 8);
  uVar10 = *(undefined8 *)param_2;
  uVar16 = *(undefined8 *)(param_3 + 8);
  uVar14 = *(undefined8 *)param_3;
  if (uVar7 == *(uint *)(this + 0x358)) {
    iVar2 = uVar7 << 1;
    if (uVar7 == 0) {
      iVar2 = 1;
    }
    if ((int)uVar7 < iVar2) {
      if (iVar2 == 0) {
        lVar4 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar4 = (*(code *)PTR_FUN_01048e38)((long)iVar2 * 0x58,0x10);
        uVar7 = *(uint *)(this + 0x354);
      }
      if (0 < (int)uVar7) {
        lVar8 = 0;
        do {
          puVar6 = (undefined8 *)(lVar4 + lVar8);
          puVar1 = (undefined8 *)(*(long *)(this + 0x360) + lVar8);
          lVar8 = lVar8 + 0x58;
          uVar13 = *puVar1;
          uVar12 = puVar1[3];
          uVar9 = puVar1[2];
          puVar6[1] = puVar1[1];
          *puVar6 = uVar13;
          puVar6[3] = uVar12;
          puVar6[2] = uVar9;
          uVar15 = puVar1[6];
          uVar13 = puVar1[9];
          uVar12 = puVar1[8];
          uVar9 = puVar1[10];
          uVar18 = puVar1[5];
          uVar17 = puVar1[4];
          puVar6[7] = puVar1[7];
          puVar6[6] = uVar15;
          puVar6[9] = uVar13;
          puVar6[8] = uVar12;
          puVar6[10] = uVar9;
          puVar6[5] = uVar18;
          puVar6[4] = uVar17;
        } while ((ulong)uVar7 * 0x58 - lVar8 != 0);
      }
      if ((*(long *)(this + 0x360) != 0) && (this[0x368] != (btSoftBody)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar7 = *(uint *)(this + 0x354);
      *(long *)(this + 0x360) = lVar4;
      *(int *)(this + 0x358) = iVar2;
      this[0x368] = (btSoftBody)0x1;
    }
  }
  puVar6 = (undefined8 *)(*(long *)(this + 0x360) + (long)(int)uVar7 * 0x58);
  uVar7 = (uint)(param_5 != (Node *)0x0);
  if (param_4 != (Node *)0x0) {
    uVar7 = uVar7 + 1;
  }
  if (param_6 != (Node *)0x0) {
    uVar7 = uVar7 + 1;
  }
  if (param_7 != (Node *)0x0) {
    uVar7 = uVar7 + 1;
  }
  *puVar6 = 0;
  puVar6[1] = param_1;
  puVar6[3] = uVar11;
  puVar6[2] = uVar10;
  puVar6[5] = param_4;
  puVar6[6] = param_5;
  *(uint *)(puVar6 + 4) = uVar7;
  *(undefined4 *)((long)puVar6 + 0x24) = 0;
  puVar6[7] = param_6;
  puVar6[8] = param_7;
  puVar6[10] = uVar16;
  puVar6[9] = uVar14;
  *(int *)(this + 0x354) = *(int *)(this + 0x354) + 1;
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


