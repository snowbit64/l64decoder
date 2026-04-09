// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClipArea
// Entry Point: 0097ddc0
// Size: 328 bytes
// Signature: undefined __thiscall getClipArea(MeshSplitManager * this, vector * param_1, Brep * param_2, Matrix4x4 * param_3, float * param_4, float * param_5, float * param_6, float * param_7)


/* MeshSplitManager::getClipArea(std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned
   int> >&, Brep*, Matrix4x4 const&, float&, float&, float&, float&) */

void __thiscall
MeshSplitManager::getClipArea
          (MeshSplitManager *this,vector *param_1,Brep *param_2,Matrix4x4 *param_3,float *param_4,
          float *param_5,float *param_6,float *param_7)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  puVar5 = *(uint **)param_1;
  lVar6 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_2 + 0x2f68);
  lVar3 = *(long *)(param_2 + 0x2f50);
  lVar4 = *(long *)(param_2 + 0x2ef0);
  pfVar1 = (float *)(lVar4 + (ulong)*(ushort *)
                                     (lVar3 + (ulong)*(ushort *)(lVar2 + (ulong)*puVar5 * 8) * 0xc)
                             * 0x10);
  uVar9 = NEON_fmadd(*pfVar1 - *(float *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x10),
                     (pfVar1[1] - *(float *)(param_3 + 0x34)) * *(float *)(param_3 + 0x14));
  uVar7 = NEON_fmadd(*pfVar1 - *(float *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x20),
                     (pfVar1[1] - *(float *)(param_3 + 0x34)) * *(float *)(param_3 + 0x24));
  fVar10 = (float)NEON_fmadd(pfVar1[2] - *(float *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x18),
                             uVar9);
  fVar8 = (float)NEON_fmadd(pfVar1[2] - *(float *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x28),
                            uVar7);
  *param_4 = fVar10;
  *param_5 = fVar10;
  *param_6 = fVar8;
  *param_7 = fVar8;
  if ((lVar6 - (long)puVar5 & 0x3fffffff8U) != 0) {
    lVar6 = ((ulong)(lVar6 - (long)puVar5) >> 2 & 0xffffffff) - 1;
    do {
      puVar5 = puVar5 + 1;
      pfVar1 = (float *)(lVar4 + (ulong)*(ushort *)
                                         (lVar3 + (ulong)*(ushort *)(lVar2 + (ulong)*puVar5 * 8) *
                                                  0xc) * 0x10);
      uVar7 = NEON_fmadd(*pfVar1 - *(float *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x10),
                         (pfVar1[1] - *(float *)(param_3 + 0x34)) * *(float *)(param_3 + 0x14));
      fVar11 = (float)NEON_fmadd(pfVar1[2] - *(float *)(param_3 + 0x38),
                                 *(undefined4 *)(param_3 + 0x18),uVar7);
      uVar7 = NEON_fmadd(*pfVar1 - *(float *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x20),
                         (pfVar1[1] - *(float *)(param_3 + 0x34)) * *(float *)(param_3 + 0x24));
      fVar10 = (float)NEON_fmadd(pfVar1[2] - *(float *)(param_3 + 0x38),
                                 *(undefined4 *)(param_3 + 0x28),uVar7);
      fVar8 = *param_4;
      if (fVar11 < *param_4) {
        fVar8 = fVar11;
      }
      *param_4 = fVar8;
      fVar8 = *param_5;
      if (*param_5 < fVar11) {
        fVar8 = fVar11;
      }
      *param_5 = fVar8;
      fVar8 = *param_6;
      if (fVar10 < *param_6) {
        fVar8 = fVar10;
      }
      *param_6 = fVar8;
      fVar8 = *param_7;
      if (*param_7 < fVar10) {
        fVar8 = fVar10;
      }
      lVar6 = lVar6 + -1;
      *param_7 = fVar8;
    } while (lVar6 != 0);
  }
  return;
}


