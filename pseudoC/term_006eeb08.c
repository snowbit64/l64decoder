// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: term
// Entry Point: 006eeb08
// Size: 68 bytes
// Signature: undefined term(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FontOverlayRenderer::BufferData2D::term() */

void FontOverlayRenderer::BufferData2D::term(void)

{
  void **in_x0;
  
  if (*in_x0 != (void *)0x0) {
    operator_delete__(*in_x0);
  }
  if ((long *)in_x0[2] != (long *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x006eeb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_x0[2] + 8))();
    return;
  }
  return;
}


