// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputePixelDepthBuffer
// Entry Point: 00da06ec
// Size: 276 bytes
// Signature: undefined __thiscall ComputePixelDepthBuffer(MaskedOcclusionCullingPrivate * this, float * param_1, bool param_2)


/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::ComputePixelDepthBuffer(float*, bool)
    */

void __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::ComputePixelDepthBuffer
          (MaskedOcclusionCullingPrivate *this,float *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  
  uVar1 = *(uint *)(this + 0x128);
  uVar2 = *(uint *)(this + 0x124);
  uVar7 = (ulong)uVar2;
  bVar4 = true;
  if (0 < (int)uVar1) {
    bVar4 = (int)(uVar2 - 1) < 0;
  }
  if (bVar4 == (0 < (int)uVar1 && SBORROW4(uVar2,1))) {
    uVar8 = 0;
    if (param_2) {
      iVar9 = uVar2 * (uVar1 - 1);
      do {
        iVar3 = *(int *)(this + 300);
        uVar10 = 0;
        lVar11 = *(long *)(this + 0x138);
        do {
          lVar6 = (uVar10 >> 3 & 3) * 4;
          lVar5 = lVar11 + (long)(int)(iVar3 * ((uint)(uVar8 >> 2) & 0x3fffffff) +
                                      ((uint)uVar10 >> 5)) * 0x30;
          param_1[(long)iVar9 + uVar10] =
               *(float *)(lVar5 + ((ulong)(*(uint *)(lVar5 + lVar6 + 0x20) >>
                                          (uVar10 & 7 | (ulong)(uint)((int)uVar8 << 3) & 0x18)) & 1)
                                  * 0x10 + lVar6);
          uVar10 = uVar10 + 1;
        } while (uVar7 != uVar10);
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 - uVar2;
      } while (uVar8 != uVar1);
    }
    else {
      do {
        iVar9 = *(int *)(this + 300);
        uVar10 = 0;
        lVar11 = *(long *)(this + 0x138);
        do {
          lVar5 = (uVar10 >> 3 & 3) * 4;
          lVar6 = lVar11 + (long)(int)(iVar9 * ((uint)(uVar8 >> 2) & 0x3fffffff) +
                                      ((uint)uVar10 >> 5)) * 0x30;
          param_1[uVar10] =
               *(float *)(lVar6 + ((ulong)(*(uint *)(lVar6 + lVar5 + 0x20) >>
                                          (uVar10 & 7 | (ulong)(uint)((int)uVar8 << 3) & 0x18)) & 1)
                                  * 0x10 + lVar5);
          uVar10 = uVar10 + 1;
        } while (uVar7 != uVar10);
        uVar8 = uVar8 + 1;
        param_1 = param_1 + uVar7;
      } while (uVar8 != uVar1);
    }
  }
  return;
}


