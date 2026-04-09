// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct
// Entry Point: 0076b47c
// Size: 56 bytes
// Signature: undefined __cdecl construct(MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::construct(MethodInvocation*) */

FoliageSystemDesc * FoliageTransformGroupConstructor::construct(MethodInvocation *param_1)

{
  FoliageSystemDesc *this;
  
  this = (FoliageSystemDesc *)operator_new(0x30);
                    /* try { // try from 0076b494 to 0076b4a3 has its CatchHandler @ 0076b4b4 */
  FoliageSystemDesc::FoliageSystemDesc(this,8.0,0xff00ff,0);
  return this;
}


