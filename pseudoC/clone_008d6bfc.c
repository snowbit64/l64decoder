// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 008d6bfc
// Size: 132 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ParticleSystem::clone() */

ParticleSystem * ParticleSystem::clone(void)

{
  long lVar1;
  ParticleSystem *in_x0;
  ParticleSystem *this;
  ParticleSystemDesc aPStack_d0 [128];
  byte local_50;
  void *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  ParticleSystemDesc::ParticleSystemDesc(aPStack_d0);
                    /* try { // try from 008d6c24 to 008d6c2f has its CatchHandler @ 008d6c94 */
  saveToDesc(in_x0,aPStack_d0);
                    /* try { // try from 008d6c30 to 008d6c37 has its CatchHandler @ 008d6c90 */
  this = (ParticleSystem *)operator_new(0x1c8);
                    /* try { // try from 008d6c3c to 008d6c47 has its CatchHandler @ 008d6c80 */
  ParticleSystem(this,aPStack_d0,true);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


