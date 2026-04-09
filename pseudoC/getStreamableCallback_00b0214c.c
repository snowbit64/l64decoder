// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStreamableCallback
// Entry Point: 00b0214c
// Size: 248 bytes
// Signature: undefined __thiscall getStreamableCallback(StreamManager * this, StreamQueueCallback * param_1, void * param_2)


/* StreamManager::getStreamableCallback(StreamManager::StreamQueueCallback*, void*) */

undefined8 * __thiscall
StreamManager::getStreamableCallback(StreamManager *this,StreamQueueCallback *param_1,void *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *this_00;
  undefined **local_80;
  undefined8 local_78;
  StreamQueueCallback *local_70;
  void *pvStack_68;
  StreamManager *local_60;
  StreamManager *pSStack_58;
  char local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_60 = this + 0xc0;
  local_48 = *(long *)(lVar1 + 0x28);
  pSStack_58 = this + 0xe8;
  local_50 = '\0';
  Mutex::enterCriticalSection();
  if (*(long *)(this + 0xe8) == *(long *)(this + 0xf0)) {
                    /* try { // try from 00b021e8 to 00b021ef has its CatchHandler @ 00b02254 */
    this_00 = (undefined8 *)operator_new(0x20);
                    /* try { // try from 00b021f4 to 00b021f7 has its CatchHandler @ 00b02244 */
    Streamable::Streamable((Streamable *)this_00);
    this_00[2] = param_1;
    this_00[3] = param_2;
    *this_00 = &PTR__Streamable_00fe7188;
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(this + 0xf0) + -8);
    this_00 = (undefined8 *)*puVar2;
    *(undefined8 **)(this + 0xf0) = puVar2;
                    /* try { // try from 00b021a8 to 00b021af has its CatchHandler @ 00b0225c */
    Streamable::Streamable((Streamable *)&local_80);
    local_80 = &PTR__Streamable_00fe7188;
    this_00[1] = local_78;
    this_00[3] = param_2;
    this_00[2] = param_1;
    local_70 = param_1;
    pvStack_68 = param_2;
    Streamable::~Streamable((Streamable *)&local_80);
    if (local_50 != '\0') goto LAB_00b02214;
  }
                    /* try { // try from 00b0220c to 00b02213 has its CatchHandler @ 00b02258 */
  Mutex::leaveCriticalSection();
LAB_00b02214:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}


