// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2PhysicsOverlapCallback
// Entry Point: 009b3eec
// Size: 132 bytes
// Signature: undefined __thiscall ~Bt2PhysicsOverlapCallback(Bt2PhysicsOverlapCallback * this)


/* Bt2PhysicsOverlapCallback::~Bt2PhysicsOverlapCallback() */

void __thiscall
Bt2PhysicsOverlapCallback::~Bt2PhysicsOverlapCallback(Bt2PhysicsOverlapCallback *this)

{
  *(undefined ***)this = &PTR__Bt2PhysicsOverlapCallback_00fe19b8;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
                    /* try { // try from 009b3f1c to 009b3f1f has its CatchHandler @ 009b3f78 */
  btAlignedFreeInternal(*(void **)(this + 0x28));
  if ((*(void **)(this + 0x50) != (void *)0x0) && (this[0x58] != (Bt2PhysicsOverlapCallback)0x0)) {
                    /* try { // try from 009b3f30 to 009b3f33 has its CatchHandler @ 009b3f74 */
    btAlignedFreeInternal(*(void **)(this + 0x50));
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x58] = (Bt2PhysicsOverlapCallback)0x1;
  if ((*(void **)(this + 0x18) != (void *)0x0) && (this[0x20] != (Bt2PhysicsOverlapCallback)0x0)) {
                    /* try { // try from 009b3f54 to 009b3f57 has its CatchHandler @ 009b3f70 */
    btAlignedFreeInternal(*(void **)(this + 0x18));
  }
  this[0x20] = (Bt2PhysicsOverlapCallback)0x1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


