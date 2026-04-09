// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Layer
// Entry Point: 00a64c54
// Size: 172 bytes
// Signature: undefined __thiscall ~Layer(Layer * this)


/* FoliageSystemDesc::Layer::~Layer() */

void __thiscall FoliageSystemDesc::Layer::~Layer(Layer *this)

{
  Layer LVar1;
  State *pSVar2;
  State *this_00;
  State *pSVar3;
  
  pSVar3 = *(State **)(this + 0x58);
  if (pSVar3 != (State *)0x0) {
    this_00 = *(State **)(this + 0x60);
    pSVar2 = pSVar3;
    if (this_00 != pSVar3) {
      do {
        this_00 = this_00 + -0x68;
        State::~State(this_00);
      } while (this_00 != pSVar3);
      pSVar2 = *(State **)(this + 0x58);
    }
    *(State **)(this + 0x60) = pSVar3;
    operator_delete(pSVar2);
  }
  if (((byte)this[0x30] & 1) == 0) {
    LVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    LVar1 = this[0x18];
  }
  if (((byte)LVar1 & 1) == 0) {
    LVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    LVar1 = *this;
  }
  if (((byte)LVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


