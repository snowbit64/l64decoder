// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayCast
// Entry Point: 008f0634
// Size: 448 bytes
// Signature: undefined __thiscall rayCast(QuadTreeNode * this, Vector3 * param_1, Vector3 * param_2, float * param_3, Vector3 * param_4, GeoMipMappingTerrain * param_5)


/* GeoQuadTree::QuadTreeNode::rayCast(Vector3 const&, Vector3 const&, float&, Vector3&,
   GeoMipMappingTerrain*) */

uint __thiscall
GeoQuadTree::QuadTreeNode::rayCast
          (QuadTreeNode *this,Vector3 *param_1,Vector3 *param_2,float *param_3,Vector3 *param_4,
          GeoMipMappingTerrain *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = (*(float *)(this + 0x10) + *(float *)(this + 0x18)) * 0.5;
  fStack_64 = (*(float *)(this + 0x20) + *(float *)(this + 0x24)) * 0.5;
  local_60 = (*(float *)(this + 0x14) + *(float *)(this + 0x1c)) * 0.5;
  local_78 = (*(float *)(this + 0x18) - *(float *)(this + 0x10)) * 0.5;
  fStack_74 = (*(float *)(this + 0x24) - *(float *)(this + 0x20)) * 0.5;
  local_70 = (*(float *)(this + 0x1c) - *(float *)(this + 0x14)) * 0.5;
  uVar6 = MathUtil::rayAABBIntersect3D
                    (param_1,param_2,(Vector3 *)&local_68,(Vector3 *)&local_78,&local_7c,&local_80);
  if ((uVar6 & 1) != 0) {
    fVar7 = *param_3;
    if (local_7c <= fVar7) {
      if (this[0x38] == (QuadTreeNode)0x0) {
        if (fVar7 < local_80) {
          local_80 = fVar7;
        }
        uVar5 = GeoMipMappingTerrain::rayCastCallback
                          (param_5,param_1,param_2,param_3,param_4,local_7c,local_80);
      }
      else {
        uVar2 = rayCast(*(QuadTreeNode **)(this + 0x40),param_1,param_2,param_3,param_4,param_5);
        uVar3 = rayCast(*(QuadTreeNode **)(this + 0x48),param_1,param_2,param_3,param_4,param_5);
        uVar4 = rayCast(*(QuadTreeNode **)(this + 0x50),param_1,param_2,param_3,param_4,param_5);
        uVar5 = rayCast(*(QuadTreeNode **)(this + 0x58),param_1,param_2,param_3,param_4,param_5);
        uVar5 = uVar2 | uVar3 | uVar4 | uVar5;
      }
      goto LAB_008f06fc;
    }
  }
  uVar5 = 0;
LAB_008f06fc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


