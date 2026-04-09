// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHit
// Entry Point: 006fb0b0
// Size: 76 bytes
// Signature: undefined __cdecl onHit(TransformGroup * param_1, Vector3 * param_2, float param_3, Vector3 * param_4, int param_5, TransformGroup * param_6, bool param_7)


/* BillboardShape::AdsRaycastReport::onHit(TransformGroup*, Vector3 const&, float, Vector3 const&,
   int, TransformGroup*, bool) */

undefined8
BillboardShape::AdsRaycastReport::onHit
          (TransformGroup *param_1,Vector3 *param_2,float param_3,Vector3 *param_4,int param_5,
          TransformGroup *param_6,bool param_7)

{
  int iVar1;
  uint in_w6;
  long lVar2;
  
  if (param_3 < 3.402823e+38) {
    param_1[0x10] = (TransformGroup)0x1;
  }
  if ((in_w6 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    lVar2 = *(long *)(param_1 + 8);
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    if ((lVar2 != 0) && (iVar1 + 1 == *(int *)(lVar2 + 0x80))) {
      *(TransformGroup *)(lVar2 + 0x74) = param_1[0x10];
    }
  }
  return 0;
}


