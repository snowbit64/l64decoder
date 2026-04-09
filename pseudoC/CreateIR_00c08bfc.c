// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateIR
// Entry Point: 00c08bfc
// Size: 124 bytes
// Signature: undefined __thiscall CreateIR(CreateIR * this, GsTSymbolTable * param_1, IR_TypeSet * param_2)


/* CreateIR::CreateIR(GsTSymbolTable&, IR_TypeSet*) */

void __thiscall CreateIR::CreateIR(CreateIR *this,GsTSymbolTable *param_1,IR_TypeSet *param_2)

{
  CodeTraverser::CodeTraverser((CodeTraverser *)this);
  *(GsTSymbolTable **)(this + 0x60) = param_1;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(CreateIR **)(this + 0x138) = this + 0x140;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined ***)this = &PTR_preVisitNode_00fed290;
  *(undefined8 *)(this + 0x128) = 0;
                    /* try { // try from 00c08c5c to 00c08c63 has its CatchHandler @ 00c08c78 */
  SHC_PoolAllocator::SHC_PoolAllocator((SHC_PoolAllocator *)(this + 0x150),param_2);
  *(IR_TypeSet **)(this + 0x68) = param_2;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}


