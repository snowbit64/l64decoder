// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TextLine
// Entry Point: 00ae4194
// Size: 392 bytes
// Signature: undefined __thiscall ~TextLine(TextLine * this)


/* WARNING: Type propagation algorithm not settling */
/* TextLine::~TextLine() */

void __thiscall TextLine::~TextLine(TextLine *this)

{
  TextLine TVar1;
  void *pvVar2;
  TextLine *pTVar3;
  TextLine *this_00;
  TextLine *pTVar4;
  
  if (((byte)this[0x140] & 1) == 0) {
    TVar1 = this[0x128];
  }
  else {
    operator_delete(*(void **)(this + 0x150));
    TVar1 = this[0x128];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x110];
  }
  else {
    operator_delete(*(void **)(this + 0x138));
    TVar1 = this[0x110];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0xf8];
  }
  else {
    operator_delete(*(void **)(this + 0x120));
    TVar1 = this[0xf8];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0xe0];
  }
  else {
    operator_delete(*(void **)(this + 0x108));
    TVar1 = this[0xe0];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[200];
  }
  else {
    operator_delete(*(void **)(this + 0xf0));
    TVar1 = this[200];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0xb0];
  }
  else {
    operator_delete(*(void **)(this + 0xd8));
    TVar1 = this[0xb0];
  }
  if (((byte)TVar1 & 1) == 0) {
    pTVar4 = *(TextLine **)(this + 0x98);
  }
  else {
    operator_delete(*(void **)(this + 0xc0));
    pTVar4 = *(TextLine **)(this + 0x98);
  }
  if (pTVar4 == (TextLine *)0x0) {
    pvVar2 = *(void **)(this + 0x78);
  }
  else {
    this_00 = *(TextLine **)(this + 0xa0);
    pTVar3 = pTVar4;
    if (this_00 != pTVar4) {
      do {
        this_00 = this_00 + -0x158;
        ~TextLine(this_00);
      } while (this_00 != pTVar4);
      pTVar3 = *(TextLine **)(this + 0x98);
    }
    *(TextLine **)(this + 0xa0) = pTVar4;
    operator_delete(pTVar3);
    pvVar2 = *(void **)(this + 0x78);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x48] & 1) == 0) {
    TVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    TVar1 = this[0x30];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    TVar1 = this[0x18];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    TVar1 = *this;
  }
  if (((byte)TVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


