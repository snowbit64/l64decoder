// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cacheServerEnable
// Entry Point: 00bf29b4
// Size: 176 bytes
// Signature: undefined __thiscall cacheServerEnable(ShaderManager * this, bool param_1)


/* ShaderManager::cacheServerEnable(bool) */

void __thiscall ShaderManager::cacheServerEnable(ShaderManager *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  KeyValueCacheClient *this_00;
  
  this_00 = *(KeyValueCacheClient **)(this + 8);
  if (param_1) {
    if (this_00 == (KeyValueCacheClient *)0x0) {
      puVar1 = (undefined8 *)operator_new(0x58);
                    /* try { // try from 00bf29e0 to 00bf29e7 has its CatchHandler @ 00bf2a88 */
      puVar2 = (undefined8 *)operator_new(0x30);
      puVar1[2] = puVar2;
      *(undefined2 *)(puVar2 + 4) = 0x2f33;
      *(undefined *)((long)puVar2 + 0x22) = 0;
      puVar1[4] = 0;
      puVar1[3] = puVar1 + 4;
      puVar1[5] = 0;
      puVar2[1] = 0x65756c617679656b;
      *puVar2 = 0x2f2f3a7370747468;
      puVar2[3] = 0x3434383a73746e61;
      puVar2[2] = 0x69672e6568636163;
      puVar1[1] = 0x22;
      *puVar1 = 0x31;
                    /* try { // try from 00bf2a2c to 00bf2a33 has its CatchHandler @ 00bf2a64 */
      Mutex::Mutex((Mutex *)(puVar1 + 6),true);
      *(undefined8 **)(this + 8) = puVar1;
    }
  }
  else if (this_00 != (KeyValueCacheClient *)0x0) {
    KeyValueCacheClient::~KeyValueCacheClient(this_00);
    operator_delete(this_00);
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


