// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InstancedGeometryManager
// Entry Point: 008c5130
// Size: 132 bytes
// Signature: undefined __thiscall InstancedGeometryManager(InstancedGeometryManager * this)


/* InstancedGeometryManager::InstancedGeometryManager() */

void __thiscall InstancedGeometryManager::InstancedGeometryManager(InstancedGeometryManager *this)

{
  VertexBufferPool *this_00;
  
  *(undefined8 *)(this + 0x28) = 0;
  *(InstancedGeometryManager **)(this + 0x20) = this + 0x28;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(InstancedGeometryManager **)this = this + 8;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(InstancedGeometryManager **)(this + 0x40) = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 008c5184 to 008c518b has its CatchHandler @ 008c51cc */
  this_00 = (VertexBufferPool *)operator_new(0x3c88);
                    /* try { // try from 008c5190 to 008c5197 has its CatchHandler @ 008c51b4 */
  VertexBufferPool::VertexBufferPool(this_00,4);
  *(VertexBufferPool **)(this + 0x38) = this_00;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


