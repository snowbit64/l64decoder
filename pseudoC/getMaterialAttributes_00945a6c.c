// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaterialAttributes
// Entry Point: 00945a6c
// Size: 208 bytes
// Signature: undefined __thiscall getMaterialAttributes(GsMaterial * this, RenderPassMaterialAttributes * param_1, MaterialAttributes * param_2)


/* GsMaterial::getMaterialAttributes(RenderPassMaterialAttributes const&, MaterialAttributes&) const
    */

undefined8 __thiscall
GsMaterial::getMaterialAttributes
          (GsMaterial *this,RenderPassMaterialAttributes *param_1,MaterialAttributes *param_2)

{
  RenderPassMaterialAttributes RVar1;
  RenderPassMaterialAttributes RVar2;
  long lVar3;
  
  if ((*(RenderPassMaterialAttributes *)param_2 != param_1[2]) ||
     ((this[0x9e] != (GsMaterial)0x0 && (param_1[4] != (RenderPassMaterialAttributes)0x0)))) {
    return 0;
  }
  RVar1 = param_1[5];
  *(RenderPassMaterialAttributes *)(param_2 + 0xe) = param_1[4];
  if ((RVar1 != (RenderPassMaterialAttributes)0x0) &&
     (param_1[4] == (RenderPassMaterialAttributes)0x0)) {
    RVar1 = param_1[3];
    RVar2 = *param_1;
    lVar3 = *(long *)(this + 0x80);
    *(RenderPassMaterialAttributes *)(param_2 + 0xd) = RVar2;
    param_2[0xc] = (MaterialAttributes)
                   (RVar1 != (RenderPassMaterialAttributes)0x0 &&
                   param_2[0xc] != (MaterialAttributes)0x0);
    if ((lVar3 == 0) &&
       ((RVar2 == (RenderPassMaterialAttributes)0x0 &&
        (param_1[1] == (RenderPassMaterialAttributes)0x0)))) {
      *(undefined4 *)(param_2 + 4) = 0;
      param_2[8] = (MaterialAttributes)0x0;
    }
    return 1;
  }
  *(undefined2 *)(param_2 + 0xc) = 0;
  if (*(long *)(this + 0x80) != 0) {
    return 1;
  }
  if (param_2[1] == (MaterialAttributes)0x0) {
    param_2[2] = (MaterialAttributes)0x0;
  }
  else if (param_2[2] == (MaterialAttributes)0x0) goto LAB_00945b28;
  param_2[9] = (MaterialAttributes)0x0;
LAB_00945b28:
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[8] = (MaterialAttributes)0x0;
  *(undefined2 *)(param_2 + 10) = 0;
  return 1;
}


