// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendLink
// Entry Point: 00f7a198
// Size: 268 bytes
// Signature: undefined __thiscall appendLink(btSoftBody * this, Node * param_1, Node * param_2, Material * param_3, bool param_4)


/* btSoftBody::appendLink(btSoftBody::Node*, btSoftBody::Node*, btSoftBody::Material*, bool) */

void __thiscall
btSoftBody::appendLink(btSoftBody *this,Node *param_1,Node *param_2,Material *param_3,bool param_4)

{
  Node **ppNVar1;
  Node *pNVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  Node **ppNVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((param_4) && (uVar3 = *(uint *)(this + 0x394), 0 < (int)uVar3)) {
    lVar5 = *(long *)(this + 0x3a0);
    if ((*(Node **)(lVar5 + 0x10) == param_1) && (*(Node **)(lVar5 + 0x18) == param_2)) {
      return;
    }
    if ((*(Node **)(lVar5 + 0x10) == param_2) && (*(Node **)(lVar5 + 0x18) == param_1)) {
      return;
    }
    ppNVar6 = (Node **)(lVar5 + 0x60);
    uVar4 = 1;
    do {
      uVar7 = uVar4;
      if (uVar3 == uVar7) goto LAB_00f7a234;
      ppNVar1 = ppNVar6 + -1;
      pNVar2 = *ppNVar6;
      if ((*ppNVar1 == param_1) && (pNVar2 == param_2)) break;
      ppNVar6 = ppNVar6 + 9;
      uVar4 = uVar7 + 1;
    } while ((*ppNVar1 != param_2) || (pNVar2 != param_1));
    if (uVar7 < uVar3) {
      return;
    }
  }
LAB_00f7a234:
  appendLink(this,-1,param_3);
  fVar8 = *(float *)(param_2 + 0x10);
  fVar13 = *(float *)(param_2 + 0x14);
  fVar10 = *(float *)(param_1 + 0x10);
  fVar12 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_1 + 0x18);
  lVar5 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
  fVar14 = *(float *)(param_2 + 0x18);
  *(Node **)(lVar5 + -0x38) = param_1;
  *(Node **)(lVar5 + -0x30) = param_2;
  this[0x4b4] = (btSoftBody)0x1;
  uVar9 = NEON_fmadd(fVar12 - fVar13,fVar12 - fVar13,(fVar10 - fVar8) * (fVar10 - fVar8));
  fVar8 = (float)NEON_fmadd(fVar11 - fVar14,fVar11 - fVar14,uVar9);
  *(float *)(lVar5 + -0x28) = SQRT(fVar8);
  return;
}


