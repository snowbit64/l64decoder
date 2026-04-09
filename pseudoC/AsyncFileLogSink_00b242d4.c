// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AsyncFileLogSink
// Entry Point: 00b242d4
// Size: 744 bytes
// Signature: undefined __thiscall AsyncFileLogSink(AsyncFileLogSink * this, char * param_1, bool param_2, bool param_3)


/* AsyncFileLogSink::AsyncFileLogSink(char const*, bool, bool) */

void __thiscall
AsyncFileLogSink::AsyncFileLogSink(AsyncFileLogSink *this,char *param_1,bool param_2,bool param_3)

{
  long lVar1;
  size_t sVar2;
  allocator *paVar3;
  longlong lVar4;
  ulong uVar5;
  ACCESS_MODE AVar6;
  undefined uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  ulong local_130;
  size_t sStack_128;
  void *local_120;
  undefined8 local_110;
  size_t sStack_108;
  void *local_100;
  ulong local_f0;
  size_t sStack_e8;
  void *local_e0;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  puVar8 = (undefined8 *)(this + 8);
  *puVar8 = 0;
  *(undefined ***)this = &PTR__AsyncFileLogSink_00fe9118;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (AsyncFileLogSink)0x0;
                    /* try { // try from 00b24334 to 00b2433f has its CatchHandler @ 00b245e8 */
  Mutex::Mutex((Mutex *)(this + 0x28),true);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
                    /* try { // try from 00b2434c to 00b24353 has its CatchHandler @ 00b245dc */
  Thread::Thread((Thread *)(this + 0x68));
                    /* try { // try from 00b24358 to 00b24363 has its CatchHandler @ 00b245d0 */
  Semaphore::Semaphore((Semaphore *)(this + 0xb0),0);
  if (!param_3) {
                    /* try { // try from 00b2439c to 00b243a7 has its CatchHandler @ 00b24604 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)puVar8);
    goto LAB_00b24510;
  }
  sVar2 = strlen(param_1);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00b245ac to 00b245b7 has its CatchHandler @ 00b245c8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar9 = (void *)((ulong)&local_110 | 1);
    local_110 = CONCAT71(local_110._1_7_,(char)((int)sVar2 << 1));
    if (sVar2 != 0) goto LAB_00b243d4;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b243b8 to 00b243bf has its CatchHandler @ 00b245c8 */
    pvVar9 = operator_new(uVar5);
    local_110 = uVar5 | 1;
    sStack_108 = sVar2;
    local_100 = pvVar9;
LAB_00b243d4:
    memcpy(pvVar9,param_1,sVar2);
  }
  *(undefined *)((long)pvVar9 + sVar2) = 0;
  local_130 = local_130 & 0xffffffffffff0000;
  paVar3 = (allocator *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                     ((char)&local_110,0x2e);
  if (paVar3 != (allocator *)0xffffffffffffffff) {
    sVar2 = local_110 >> 1 & 0x7f;
    if ((local_110 & 1) != 0) {
      sVar2 = sStack_108;
    }
                    /* try { // try from 00b24424 to 00b24437 has its CatchHandler @ 00b245c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_f0,(ulong)&local_110,(ulong)paVar3,
                 (allocator *)(sVar2 - (long)paVar3));
    sStack_128 = sStack_e8;
    local_130 = local_f0;
    local_120 = local_e0;
                    /* try { // try from 00b24448 to 00b2445f has its CatchHandler @ 00b245bc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_f0,(ulong)&local_110,0,paVar3);
    if ((local_110 & 1) != 0) {
      operator_delete(local_100);
    }
    sStack_108 = sStack_e8;
    local_110 = local_f0;
    local_100 = local_e0;
  }
  pvVar9 = (void *)((ulong)&local_110 | 1);
  if ((local_110 & 1) != 0) {
    pvVar9 = local_100;
  }
                    /* try { // try from 00b2449c to 00b244a3 has its CatchHandler @ 00b245c4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar8,(ulong)pvVar9);
                    /* try { // try from 00b244a4 to 00b244ef has its CatchHandler @ 00b24610 */
  lVar4 = EnvUtil::getTime();
  EnvUtil::formatDateString(lVar4,"_%Y-%m-%d_%H-%M-%S",(char *)&local_f0,0x80);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar8);
  pvVar9 = (void *)((ulong)&local_130 | 1);
  if ((local_130 & 1) != 0) {
    pvVar9 = local_120;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar8,(ulong)pvVar9);
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
LAB_00b24510:
                    /* try { // try from 00b24510 to 00b24517 has its CatchHandler @ 00b245cc */
  NativeFile::NativeFile((NativeFile *)&local_f0);
  AVar6 = (ACCESS_MODE)*(undefined8 *)(this + 0x18);
  uVar7 = true;
  if (!param_2) {
    uVar7 = 2;
  }
  if (((byte)this[8] & 1) == 0) {
    AVar6 = (int)this + 9;
  }
                    /* try { // try from 00b24534 to 00b2454b has its CatchHandler @ 00b245f0 */
  uVar5 = NativeFile::open((char *)&local_f0,AVar6,(bool)uVar7);
  if ((uVar5 & 1) != 0) {
    NativeFile::close();
  }
  NativeFile::~NativeFile((NativeFile *)&local_f0);
                    /* try { // try from 00b24554 to 00b2457b has its CatchHandler @ 00b24604 */
  Thread::start((Thread *)(this + 0x68),staticThreadEntry_async,this,0xffffffff,
                "GIANTS Async File Log Sink",2,0x100000);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


