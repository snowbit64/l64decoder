// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Graph
// Entry Point: 00d4ca98
// Size: 72 bytes
// Signature: undefined __thiscall ~Graph(Graph * this)


/* HACD::Graph::~Graph() */

void __thiscall HACD::Graph::~Graph(Graph *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__Graph_01012930;
  std::__ndk1::__vector_base<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>>::
  ~__vector_base((__vector_base<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>> *)
                 (this + 0x38));
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


