// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createReader
// Entry Point: 00b0eb34
// Size: 264 bytes
// Signature: undefined createReader(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioBuffer::createReader() */

SoftAudioStaticOggReader * SoftAudioBuffer::createReader(void)

{
  SoftAudioBuffer *in_x0;
  SoftAudioStreamedReader *this;
  SoftAudioStaticReader *this_00;
  SoftAudioStaticOggReader *this_01;
  long lVar1;
  IStreamedAudioData *pIVar2;
  float *pfVar3;
  stb_vorbis *psVar4;
  
  pIVar2 = *(IStreamedAudioData **)(in_x0 + 0x58);
  if (pIVar2 != (IStreamedAudioData *)0x0) {
    this = (SoftAudioStreamedReader *)operator_new(0x88);
                    /* try { // try from 00b0eb64 to 00b0eb73 has its CatchHandler @ 00b0ec6c */
    SoftAudioStreamedReader::SoftAudioStreamedReader
              (this,in_x0,pIVar2,*(uint *)(in_x0 + 0x14),*(uint *)(in_x0 + 0x1c),4);
    return (SoftAudioStaticOggReader *)this;
  }
  if (*(long *)(in_x0 + 0x60) == 0) {
    pfVar3 = *(float **)(in_x0 + 0x50);
    if (pfVar3 != (float *)0x0) {
      this_00 = (SoftAudioStaticReader *)operator_new(0x28);
                    /* try { // try from 00b0ebc4 to 00b0ebcb has its CatchHandler @ 00b0ec40 */
      SoftAudioStaticReader::SoftAudioStaticReader
                (this_00,pfVar3,*(uint *)(in_x0 + 0x18),*(uint *)(in_x0 + 0x1c));
      return (SoftAudioStaticOggReader *)this_00;
    }
    return (SoftAudioStaticOggReader *)0x0;
  }
  Mutex::enterCriticalSection();
  lVar1 = *(long *)(in_x0 + 0x70);
  if (*(long *)(in_x0 + 0x68) == lVar1) {
                    /* try { // try from 00b0ebd8 to 00b0ebe3 has its CatchHandler @ 00b0ec3c */
    createDecoders(in_x0,*(char **)(in_x0 + 0x60),*(uint *)(in_x0 + 0x20),1);
    lVar1 = *(long *)(in_x0 + 0x70);
    if (*(long *)(in_x0 + 0x68) != lVar1) goto LAB_00b0eba0;
  }
  else if (*(long *)(in_x0 + 0x68) != lVar1) {
LAB_00b0eba0:
    psVar4 = *(stb_vorbis **)(lVar1 + -8);
    *(stb_vorbis ***)(in_x0 + 0x70) = (stb_vorbis **)(lVar1 + -8);
    goto LAB_00b0ebf4;
  }
  psVar4 = (stb_vorbis *)0x0;
LAB_00b0ebf4:
                    /* try { // try from 00b0ebf4 to 00b0ec03 has its CatchHandler @ 00b0ec58 */
  stb_vorbis_seek_start(psVar4);
  this_01 = (SoftAudioStaticOggReader *)operator_new(0x38);
                    /* try { // try from 00b0ec0c to 00b0ec17 has its CatchHandler @ 00b0ec48 */
  SoftAudioStaticOggReader::SoftAudioStaticOggReader(this_01,in_x0,psVar4,*(uint *)(in_x0 + 0x1c));
                    /* try { // try from 00b0ec18 to 00b0ec1f has its CatchHandler @ 00b0ec44 */
  Mutex::leaveCriticalSection();
  return this_01;
}


