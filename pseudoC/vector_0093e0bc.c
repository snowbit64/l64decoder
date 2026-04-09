// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 0093e0bc
// Size: 160 bytes
// Signature: undefined __thiscall vector(vector<TerrainTransformGroupDesc::LayerGroupDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>> * this, vector * param_1)


/* std::__ndk1::vector<TerrainTransformGroupDesc::LayerGroupDesc,
   std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>
   >::vector(std::__ndk1::vector<TerrainTransformGroupDesc::LayerGroupDesc,
   std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc> > const&) */

void __thiscall
std::__ndk1::
vector<TerrainTransformGroupDesc::LayerGroupDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>>
::vector(vector<TerrainTransformGroupDesc::LayerGroupDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>>
         *this,vector *param_1)

{
  LayerGroupDesc *pLVar1;
  LayerGroupDesc *pLVar2;
  ulong uVar3;
  LayerGroupDesc *pLVar4;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* try { // try from 0093e154 to 0093e15b has its CatchHandler @ 0093e15c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 0093e0f0 to 0093e0f7 has its CatchHandler @ 0093e15c */
    pLVar4 = (LayerGroupDesc *)operator_new(uVar3);
    *(LayerGroupDesc **)this = pLVar4;
    *(LayerGroupDesc **)(this + 8) = pLVar4;
    *(LayerGroupDesc **)(this + 0x10) = pLVar4 + ((long)uVar3 >> 6) * 0x40;
    pLVar2 = *(LayerGroupDesc **)(param_1 + 8);
    for (pLVar1 = *(LayerGroupDesc **)param_1; pLVar1 != pLVar2; pLVar1 = pLVar1 + 0x40) {
                    /* try { // try from 0093e11c to 0093e12b has its CatchHandler @ 0093e164 */
      allocator<TerrainTransformGroupDesc::LayerGroupDesc>::
      construct<TerrainTransformGroupDesc::LayerGroupDesc,TerrainTransformGroupDesc::LayerGroupDesc&>
                ((allocator<TerrainTransformGroupDesc::LayerGroupDesc> *)(this + 0x10),pLVar4,pLVar1
                );
      pLVar4 = pLVar4 + 0x40;
    }
    *(LayerGroupDesc **)(this + 8) = pLVar4;
  }
  return;
}


