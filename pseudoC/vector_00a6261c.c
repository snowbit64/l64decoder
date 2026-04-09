// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00a6261c
// Size: 172 bytes
// Signature: undefined __thiscall vector(vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>> * this, vector * param_1)


/* std::__ndk1::vector<FoliageLayerGraphics::Shape,
   std::__ndk1::allocator<FoliageLayerGraphics::Shape>
   >::vector(std::__ndk1::vector<FoliageLayerGraphics::Shape,
   std::__ndk1::allocator<FoliageLayerGraphics::Shape> > const&) */

void __thiscall
std::__ndk1::vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>
::vector(vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>
         *this,vector *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* try { // try from 00a626c0 to 00a626c7 has its CatchHandler @ 00a626c8 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00a62650 to 00a62657 has its CatchHandler @ 00a626c8 */
    puVar3 = (undefined4 *)operator_new(uVar2);
    *(undefined4 **)this = puVar3;
    *(undefined4 **)(this + 8) = puVar3;
    *(undefined4 **)(this + 0x10) = puVar3 + ((long)uVar2 >> 5) * 8;
    puVar5 = *(undefined4 **)param_1;
    puVar1 = *(undefined4 **)(param_1 + 8);
    if (puVar5 != puVar1) {
      do {
        puVar4 = puVar3;
        *puVar4 = *puVar5;
                    /* try { // try from 00a62688 to 00a62693 has its CatchHandler @ 00a626d0 */
        vector<FoliageLayerGraphics::Lod,std::__ndk1::allocator<FoliageLayerGraphics::Lod>>::vector
                  ((vector<FoliageLayerGraphics::Lod,std::__ndk1::allocator<FoliageLayerGraphics::Lod>>
                    *)(puVar4 + 2),(vector *)(puVar5 + 2));
        puVar5 = puVar5 + 8;
        puVar3 = puVar4 + 8;
      } while (puVar5 != puVar1);
      puVar3 = puVar4 + 8;
    }
    *(undefined4 **)(this + 8) = puVar3;
  }
  return;
}


