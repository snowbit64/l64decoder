// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009e9270
// Size: 96 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementSignedDistanceMask::newClone() */

undefined8 * ProceduralPlacementSignedDistanceMask::newClone(void)

{
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  undefined8 uVar1;
  
  this = (undefined8 *)operator_new(0xd8);
                    /* try { // try from 009e928c to 009e9293 has its CatchHandler @ 009e92e0 */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  uVar1 = *(undefined8 *)(in_x0 + 0xcc);
  *(undefined4 *)(this + 0x19) = *(undefined4 *)(in_x0 + 200);
  *(undefined8 *)((long)this + 0xcc) = uVar1;
  *this = &PTR__ProceduralPlacementSignedDistanceMask_00fe2be8;
                    /* try { // try from 009e92bc to 009e92bf has its CatchHandler @ 009e92d0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xe),(basic_string *)(in_x0 + 0x70));
  return this;
}


