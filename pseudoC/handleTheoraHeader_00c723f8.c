// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleTheoraHeader
// Entry Point: 00c723f8
// Size: 80 bytes
// Signature: undefined __thiscall handleTheoraHeader(TheoraVideoDecoder * this, Stream * param_1, ogg_packet * param_2)


/* TheoraVideoDecoder::handleTheoraHeader(TheoraVideoDecoder::Stream*, ogg_packet*) */

undefined8 __thiscall
TheoraVideoDecoder::handleTheoraHeader(TheoraVideoDecoder *this,Stream *param_1,ogg_packet *param_2)

{
  int iVar1;
  
  iVar1 = th_decode_headerin(param_1 + 0x1a0,param_1 + 0x1e0,param_1 + 0x200,param_2);
  if (iVar1 != -0x15) {
    if (iVar1 < 1) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x198) = 1;
  }
  return 0;
}


