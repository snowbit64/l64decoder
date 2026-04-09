// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btRigidBody
// Entry Point: 00f3f944
// Size: 212 bytes
// Signature: undefined __thiscall ~btRigidBody(btRigidBody * this)


/* btRigidBody::~btRigidBody() */

void __thiscall btRigidBody::~btRigidBody(btRigidBody *this)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  *(undefined ***)this = &PTR__btRigidBody_01018d20;
  if ((*(long *)(this + 0x240) != 0) && (this[0x248] != (btRigidBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x240) = 0;
  this[0x248] = (btRigidBody)0x1;
  *(undefined8 *)(this + 0x234) = 0;
  *(undefined ***)this = &PTR__btCollisionObject_01019428;
  if ((*(long *)(this + 0x138) != 0) && (this[0x140] != (btRigidBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x140] = (btRigidBody)0x1;
  *(undefined8 *)(this + 0x138) = 0;
  UNRECOVERED_JUMPTABLE = PTR_FUN_01048e40;
  *(undefined8 *)(this + 300) = 0;
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f3fa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(this);
  return;
}


