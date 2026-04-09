// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Brep
// Entry Point: 00b63db4
// Size: 308 bytes
// Signature: undefined __thiscall Brep(Brep * this, Brep * param_1)


/* Brep::Brep(Brep const&) */

void __thiscall Brep::Brep(Brep *this,Brep *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  lVar3 = 500;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__Brep_00fea478;
  do {
                    /* try { // try from 00b63e04 to 00b63e07 has its CatchHandler @ 00b6402c */
    std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::vector
              ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
               (this + lVar2 + 0x10),(vector *)(param_1 + lVar2 + 0x10));
    lVar2 = lVar2 + 0x18;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
                    /* try { // try from 00b63e20 to 00b63e27 has its CatchHandler @ 00b63ff8 */
  std::__ndk1::vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>>::vector
            ((vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>> *)(this + 0x2ef0),
             (vector *)(param_1 + 0x2ef0));
                    /* try { // try from 00b63e34 to 00b63e3b has its CatchHandler @ 00b63fe0 */
  std::__ndk1::vector<Matrix4x4,std::__ndk1::allocator<Matrix4x4>>::vector
            ((vector<Matrix4x4,std::__ndk1::allocator<Matrix4x4>> *)(this + 0x2f08),
             (vector *)(param_1 + 0x2f08));
                    /* try { // try from 00b63e48 to 00b63e4f has its CatchHandler @ 00b63fc0 */
  std::__ndk1::vector<Matrix4x4,std::__ndk1::allocator<Matrix4x4>>::vector
            ((vector<Matrix4x4,std::__ndk1::allocator<Matrix4x4>> *)(this + 0x2f20),
             (vector *)(param_1 + 0x2f20));
                    /* try { // try from 00b63e5c to 00b63e63 has its CatchHandler @ 00b63fa0 */
  std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x2f38),
             (vector *)(param_1 + 0x2f38));
                    /* try { // try from 00b63e70 to 00b63e77 has its CatchHandler @ 00b63f80 */
  std::__ndk1::vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>>::vector
            ((vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>> *)(this + 0x2f50),
             (vector *)(param_1 + 0x2f50));
                    /* try { // try from 00b63e84 to 00b63e8b has its CatchHandler @ 00b63f60 */
  std::__ndk1::vector<Brep::Face,std::__ndk1::allocator<Brep::Face>>::vector
            ((vector<Brep::Face,std::__ndk1::allocator<Brep::Face>> *)(this + 0x2f68),
             (vector *)(param_1 + 0x2f68));
                    /* try { // try from 00b63e98 to 00b63e9f has its CatchHandler @ 00b63f40 */
  std::__ndk1::vector<BrepCBox,std::__ndk1::allocator<BrepCBox>>::vector
            ((vector<BrepCBox,std::__ndk1::allocator<BrepCBox>> *)(this + 0x2f80),
             (vector *)(param_1 + 0x2f80));
                    /* try { // try from 00b63eac to 00b63eaf has its CatchHandler @ 00b63ee8 */
  std::__ndk1::vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>>::vector
            ((vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>> *)(this + 0x2f98),
             (vector *)(param_1 + 0x2f98));
  uVar1 = *(undefined4 *)(param_1 + 0x2fb0);
  *(undefined4 *)(this + 0x2fb3) = *(undefined4 *)(param_1 + 0x2fb3);
  *(undefined4 *)(this + 0x2fb0) = uVar1;
  return;
}


