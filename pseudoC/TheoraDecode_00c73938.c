// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TheoraDecode
// Entry Point: 00c73938
// Size: 44 bytes
// Signature: undefined __thiscall ~TheoraDecode(TheoraDecode * this)


/* TheoraVideoDecoder::TheoraDecode::~TheoraDecode() */

void __thiscall TheoraVideoDecoder::TheoraDecode::~TheoraDecode(TheoraDecode *this)

{
                    /* try { // try from 00c7394c to 00c73957 has its CatchHandler @ 00c73964 */
  th_setup_free(*(undefined8 *)(this + 0x60));
  th_decode_free(*(undefined8 *)(this + 0x68));
  return;
}


