// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TMMesh
// Entry Point: 00d53260
// Size: 92 bytes
// Signature: undefined __thiscall TMMesh(TMMesh * this, HeapManager * param_1)


/* HACD::TMMesh::TMMesh(HACD::HeapManager*) */

void __thiscall HACD::TMMesh::TMMesh(TMMesh *this,HeapManager *param_1)

{
  *(undefined ***)this = &PTR__TMMesh_01012960;
  *(undefined ***)(this + 8) = &PTR__CircularList_01012990;
  *(HeapManager **)(this + 0x20) = param_1;
  *(undefined ***)(this + 0x28) = &PTR__CircularList_010129c0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(HeapManager **)(this + 0x88) = param_1;
  *(HeapManager **)(this + 0x40) = param_1;
  *(undefined ***)(this + 0x48) = &PTR__CircularList_010129f0;
  *(HeapManager **)(this + 0x60) = param_1;
  *(undefined8 *)(this + 0x68) = 0x3ff0000000000000;
  return;
}


