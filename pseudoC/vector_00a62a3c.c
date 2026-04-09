// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00a62a3c
// Size: 252 bytes
// Signature: undefined __thiscall vector(vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>> * this, vector * param_1)


/* std::__ndk1::vector<FoliageLayerGraphics::State,
   std::__ndk1::allocator<FoliageLayerGraphics::State>
   >::vector(std::__ndk1::vector<FoliageLayerGraphics::State,
   std::__ndk1::allocator<FoliageLayerGraphics::State> > const&) */

void __thiscall
std::__ndk1::vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
::vector(vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
         *this,vector *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar2 != 0) {
    if (0x2e8ba2e8ba2e8ba < (ulong)(((long)uVar2 >> 3) * 0x2e8ba2e8ba2e8ba3)) {
                    /* try { // try from 00a62b30 to 00a62b37 has its CatchHandler @ 00a62b38 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00a62a9c to 00a62a9f has its CatchHandler @ 00a62b38 */
    puVar3 = (undefined8 *)operator_new(uVar2);
    *(undefined8 **)this = puVar3;
    *(undefined8 **)(this + 8) = puVar3;
    *(undefined8 **)(this + 0x10) = puVar3 + ((long)uVar2 >> 3);
    puVar5 = *(undefined8 **)param_1;
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar5 != puVar1) {
      do {
        puVar4 = puVar3;
        uVar6 = *(undefined8 *)((long)puVar5 + 0xc);
        uVar8 = puVar5[1];
        uVar7 = *puVar5;
        *(undefined8 *)((long)puVar4 + 0x14) = *(undefined8 *)((long)puVar5 + 0x14);
        *(undefined8 *)((long)puVar4 + 0xc) = uVar6;
        puVar4[1] = uVar8;
        *puVar4 = uVar7;
                    /* try { // try from 00a62adc to 00a62ae7 has its CatchHandler @ 00a62b40 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar4 + 4));
                    /* try { // try from 00a62af0 to 00a62afb has its CatchHandler @ 00a62b48 */
        vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>::
        vector((vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>
                *)(puVar4 + 7),(vector *)(puVar5 + 7));
        puVar3 = puVar5 + 10;
        puVar5 = puVar5 + 0xb;
        *(undefined4 *)(puVar4 + 10) = *(undefined4 *)puVar3;
        puVar3 = puVar4 + 0xb;
      } while (puVar5 != puVar1);
      puVar3 = puVar4 + 0xb;
    }
    *(undefined8 **)(this + 8) = puVar3;
  }
  return;
}


