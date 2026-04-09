// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 008ecaa8
// Size: 160 bytes
// Signature: undefined __thiscall vector(vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>> * this, vector * param_1)


/* std::__ndk1::vector<BaseTerrain::LayerGroup, std::__ndk1::allocator<BaseTerrain::LayerGroup>
   >::vector(std::__ndk1::vector<BaseTerrain::LayerGroup,
   std::__ndk1::allocator<BaseTerrain::LayerGroup> > const&) */

void __thiscall
std::__ndk1::vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>>::vector
          (vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>> *this,
          vector *param_1)

{
  LayerGroup *pLVar1;
  LayerGroup *pLVar2;
  ulong uVar3;
  LayerGroup *pLVar4;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* try { // try from 008ecb40 to 008ecb47 has its CatchHandler @ 008ecb48 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 008ecadc to 008ecae3 has its CatchHandler @ 008ecb48 */
    pLVar4 = (LayerGroup *)operator_new(uVar3);
    *(LayerGroup **)this = pLVar4;
    *(LayerGroup **)(this + 8) = pLVar4;
    *(LayerGroup **)(this + 0x10) = pLVar4 + ((long)uVar3 >> 6) * 0x40;
    pLVar2 = *(LayerGroup **)(param_1 + 8);
    for (pLVar1 = *(LayerGroup **)param_1; pLVar1 != pLVar2; pLVar1 = pLVar1 + 0x40) {
                    /* try { // try from 008ecb08 to 008ecb17 has its CatchHandler @ 008ecb50 */
      allocator<BaseTerrain::LayerGroup>::
      construct<BaseTerrain::LayerGroup,BaseTerrain::LayerGroup&>
                ((allocator<BaseTerrain::LayerGroup> *)(this + 0x10),pLVar4,pLVar1);
      pLVar4 = pLVar4 + 0x40;
    }
    *(LayerGroup **)(this + 8) = pLVar4;
  }
  return;
}


