// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: term_destination
// Entry Point: 00a98494
// Size: 36 bytes
// Signature: undefined __cdecl term_destination(jpeg_compress_struct * param_1)


/* JPEGUtil::term_destination(jpeg_compress_struct*) */

void JPEGUtil::term_destination(jpeg_compress_struct *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00a984b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x38) + 0x30))
            (*(long **)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x28),0x1000 - *(int *)(lVar1 + 8));
  return;
}


