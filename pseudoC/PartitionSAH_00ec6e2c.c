// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PartitionSAH
// Entry Point: 00ec6e2c
// Size: 828 bytes
// Signature: undefined __thiscall PartitionSAH(AABBTreeImpl * this, Node * param_1, uint * param_2, uint param_3)


/* aabbtree::AABBTreeImpl::PartitionSAH(aabbtree::AABBTreeImpl::Node&, unsigned int*, unsigned int)
    */

int __thiscall
aabbtree::AABBTreeImpl::PartitionSAH(AABBTreeImpl *this,Node *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  double *__s;
  double *__s_00;
  long lVar4;
  ulong uVar5;
  int iVar6;
  double dVar7;
  double *pdVar8;
  uint *puVar9;
  ulong uVar10;
  double *pdVar11;
  double *pdVar12;
  ulong __n;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int iStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_a0;
  int iStack_9c;
  long local_98;
  
  lVar3 = tpidr_el0;
  dVar7 = 3.402823466385289e+38;
  iVar14 = 0;
  iVar6 = 0;
  iVar13 = 0;
  local_98 = *(long *)(lVar3 + 0x28);
  __n = (ulong)param_3 << 3;
  uVar1 = param_3 - 1;
  do {
    local_b0 = *(undefined8 *)(this + 0x10);
    uStack_a8 = *(undefined8 *)(this + 0x20);
    local_a0 = *(int *)(this + 0x28) * 3;
    iStack_9c = iVar13;
    FUN_00ec8264(param_2,param_2 + param_3,&local_b0);
    if (param_3 == 0) {
      __s_00 = (double *)0x0;
      __s = (double *)0x0;
      if (uVar1 == 0) goto LAB_00ec70e8;
LAB_00ec7050:
      dVar15 = 1.0 / *__s_00;
      dVar16 = (double)NEON_fmadd(dVar15 * *__s,0,dVar15 * *__s_00 * (double)(ulong)param_3);
      if (dVar16 + 0.125 <= dVar7) {
        iVar6 = 0;
        iVar14 = iVar13;
        dVar7 = dVar16 + 0.125;
      }
      if (uVar1 != 1) {
        uVar10 = 1;
        uVar5 = (ulong)uVar1;
        do {
          uVar2 = uVar5 & 0xffffffff;
          uVar5 = uVar5 - 1;
          dVar16 = (double)NEON_fmadd(dVar15 * __s[uVar10],(double)(uVar10 & 0xffffffff),
                                      dVar15 * __s_00[uVar10] * (double)uVar2);
          if (dVar16 + 0.125 <= dVar7) {
            iVar6 = (int)uVar10;
            iVar14 = iVar13;
            dVar7 = dVar16 + 0.125;
          }
          uVar10 = uVar10 + 1;
        } while (uVar5 != 1);
      }
      operator_delete(__s_00);
LAB_00ec6ec4:
      operator_delete(__s);
    }
    else {
      __s = (double *)operator_new(__n);
      memset(__s,0,__n);
      __s_00 = (double *)operator_new(__n);
      memset(__s_00,0,__n);
      dVar15 = 0.0;
      dVar16 = 0.0;
      dVar17 = 0.0;
      dVar18 = 0.0;
      dVar19 = 0.0;
      dVar20 = 0.0;
      dVar21 = 0.0;
      dVar22 = 0.0;
      dVar23 = 0.0;
      dVar24 = 0.0;
      dVar25 = 0.0;
      dVar26 = 0.0;
      lVar4 = *(long *)(this + 0x60);
      pdVar8 = __s;
      puVar9 = param_2;
      uVar10 = (ulong)param_3;
      do {
        uVar10 = uVar10 - 1;
        pdVar11 = (double *)(lVar4 + (ulong)*puVar9 * 0x30);
        if (*pdVar11 <= dVar26) {
          dVar26 = *pdVar11;
        }
        if (pdVar11[1] <= dVar25) {
          dVar25 = pdVar11[1];
        }
        if (pdVar11[2] <= dVar24) {
          dVar24 = pdVar11[2];
        }
        pdVar12 = (double *)(lVar4 + (ulong)param_2[uVar10 & 0xffffffff] * 0x30);
        if (dVar23 <= pdVar11[3]) {
          dVar23 = pdVar11[3];
        }
        if (dVar22 <= pdVar11[4]) {
          dVar22 = pdVar11[4];
        }
        if (dVar21 <= pdVar11[5]) {
          dVar21 = pdVar11[5];
        }
        if (*pdVar12 <= dVar20) {
          dVar20 = *pdVar12;
        }
        if (pdVar12[1] <= dVar19) {
          dVar19 = pdVar12[1];
        }
        if (pdVar12[2] <= dVar18) {
          dVar18 = pdVar12[2];
        }
        if (dVar17 <= pdVar12[3]) {
          dVar17 = pdVar12[3];
        }
        if (dVar16 <= pdVar12[4]) {
          dVar16 = pdVar12[4];
        }
        if (dVar15 <= pdVar12[5]) {
          dVar15 = pdVar12[5];
        }
        uVar27 = NEON_fmadd(dVar23 - dVar26,dVar22 - dVar25,(dVar23 - dVar26) * (dVar21 - dVar24));
        uVar30 = NEON_fmadd(dVar17 - dVar20,dVar16 - dVar19,(dVar17 - dVar20) * (dVar15 - dVar18));
        dVar28 = (double)NEON_fmadd(dVar22 - dVar25,dVar21 - dVar24,uVar27);
        dVar29 = (double)NEON_fmadd(dVar16 - dVar19,dVar15 - dVar18,uVar30);
        *pdVar8 = dVar28 + dVar28;
        __s_00[uVar10 & 0xffffffff] = dVar29 + dVar29;
        pdVar8 = pdVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar10 != 0);
      if (uVar1 != 0) goto LAB_00ec7050;
LAB_00ec70e8:
      operator_delete(__s_00);
      if (__s != (double *)0x0) goto LAB_00ec6ec4;
    }
    iVar13 = iVar13 + 1;
    if (iVar13 == 3) {
      local_c8 = *(undefined8 *)(this + 0x10);
      uStack_c0 = *(undefined8 *)(this + 0x20);
      local_b8 = *(int *)(this + 0x28) * 3;
      iStack_b4 = iVar14;
      FUN_00ec8264(param_2,param_2 + param_3,&local_c8);
      if (*(long *)(lVar3 + 0x28) == local_98) {
        return iVar6 + 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


