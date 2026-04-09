// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LocalFileListChannel
// Entry Point: 008bed18
// Size: 268 bytes
// Signature: undefined __thiscall LocalFileListChannel(LocalFileListChannel * this, char * param_1, uint param_2)


/* LocalFileListChannel::LocalFileListChannel(char const*, unsigned int) */

void __thiscall
LocalFileListChannel::LocalFileListChannel(LocalFileListChannel *this,char *param_1,uint param_2)

{
  size_t __n;
  StreamedSample *this_00;
  LocalFileListChannel *__dest;
  ulong uVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__LocalFileListChannel_00fddce0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 008bee1c to 008bee23 has its CatchHandler @ 008bee4c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 0x51;
    this[0x50] = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_008bedcc;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008beda4 to 008bedab has its CatchHandler @ 008bee4c */
    __dest = (LocalFileListChannel *)operator_new(uVar1);
    *(size_t *)(this + 0x58) = __n;
    *(LocalFileListChannel **)(this + 0x60) = __dest;
    *(ulong *)(this + 0x50) = uVar1 | 1;
  }
  memcpy(__dest,param_1,__n);
LAB_008bedcc:
  __dest[__n] = (LocalFileListChannel)0x0;
  this[0x30] = (LocalFileListChannel)0x0;
  this[0x20] = (LocalFileListChannel)0x0;
  *(uint *)(this + 0x6c) = param_2;
                    /* try { // try from 008beddc to 008bede3 has its CatchHandler @ 008bee34 */
  this_00 = (StreamedSample *)operator_new(0x50);
                    /* try { // try from 008bede8 to 008bedf7 has its CatchHandler @ 008bee24 */
  StreamedSample::StreamedSample(this_00,"MusicPlayer",true);
  *(StreamedSample **)(this + 0x28) = this_00;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


