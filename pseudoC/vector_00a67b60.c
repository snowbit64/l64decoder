// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00a67b60
// Size: 172 bytes
// Signature: undefined __thiscall vector(vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> * this, vector * param_1)


/* std::__ndk1::vector<FoliageSystemDesc::Shape, std::__ndk1::allocator<FoliageSystemDesc::Shape>
   >::vector(std::__ndk1::vector<FoliageSystemDesc::Shape,
   std::__ndk1::allocator<FoliageSystemDesc::Shape> > const&) */

void __thiscall
std::__ndk1::vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>::
vector(vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> *this,
      vector *param_1)

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
                    /* try { // try from 00a67c04 to 00a67c0b has its CatchHandler @ 00a67c0c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00a67b94 to 00a67b9b has its CatchHandler @ 00a67c0c */
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
                    /* try { // try from 00a67bcc to 00a67bd7 has its CatchHandler @ 00a67c14 */
        vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::vector
                  ((vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> *)
                   (puVar4 + 2),(vector *)(puVar5 + 2));
        puVar5 = puVar5 + 8;
        puVar3 = puVar4 + 8;
      } while (puVar5 != puVar1);
      puVar3 = puVar4 + 8;
    }
    *(undefined4 **)(this + 8) = puVar3;
  }
  return;
}


