#include <PythonQt.h>
#include "clementine0.h"


void PythonQt_init_Clementine(PyObject* module) {
PythonQt::priv()->registerClass(&AlbumCoverFetcherSearch::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_AlbumCoverFetcherSearch>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_AlbumCoverFetcherSearch>, module, 0);
PythonQt::priv()->registerClass(&CoverProvider::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_CoverProvider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_CoverProvider>, module, 0);
PythonQt::priv()->registerClass(&CoverProviderFactory::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_CoverProviderFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_CoverProviderFactory>, module, 0);
PythonQt::priv()->registerClass(&CoverProviders::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_CoverProviders>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("CoverSearchResults", "", "Clementine", PythonQtCreateObject<PythonQtWrapper_CoverSearchResults>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("Directory", "", "Clementine", PythonQtCreateObject<PythonQtWrapper_Directory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_Directory>, module, 0);
PythonQt::priv()->registerClass(&LibraryBackend::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_LibraryBackend>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_LibraryBackend>, module, 0);
PythonQt::priv()->registerClass(&LibraryBackendInterface::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_LibraryBackendInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_LibraryBackendInterface>, module, 0);
PythonQt::priv()->registerCPPClass("LibraryBackendInterface::Album", "", "Clementine", PythonQtCreateObject<PythonQtWrapper_LibraryBackendInterface_Album>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_LibraryBackendInterface_Album>, module, 0);
PythonQt::priv()->registerCPPClass("LibraryQuery", "", "Clementine", PythonQtCreateObject<PythonQtWrapper_LibraryQuery>, NULL, module, 0);
PythonQt::priv()->registerClass(&NetworkAccessManager::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_NetworkAccessManager>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_NetworkAccessManager>, module, 0);
PythonQt::priv()->registerClass(&NetworkTimeouts::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_NetworkTimeouts>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_NetworkTimeouts>, module, 0);
PythonQt::priv()->registerClass(&Player::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_Player>, NULL, module, 0);
PythonQt::priv()->registerClass(&PlaylistParser::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_PlaylistParser>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_PlaylistParser>, module, 0);
PythonQt::priv()->registerCPPClass("QueryOptions", "", "Clementine", PythonQtCreateObject<PythonQtWrapper_QueryOptions>, NULL, module, 0);
PythonQt::priv()->registerClass(&RadioModel::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_RadioModel>, NULL, module, 0);
PythonQt::priv()->registerClass(&RadioService::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_RadioService>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_RadioService>, module, 0);
PythonQt::priv()->registerCPPClass("Song", "", "Clementine", PythonQtCreateObject<PythonQtWrapper_Song>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_Song>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("Subdirectory", "", "Clementine", PythonQtCreateObject<PythonQtWrapper_Subdirectory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_Subdirectory>, module, 0);
PythonQt::priv()->registerClass(&TaskManager::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_TaskManager>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_TaskManager>, module, 0);
PythonQt::priv()->registerCPPClass("TaskManager::Task", "", "Clementine", PythonQtCreateObject<PythonQtWrapper_TaskManager_Task>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_TaskManager_Task>, module, 0);
PythonQt::priv()->registerClass(&ThreadSafeNetworkDiskCache::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_ThreadSafeNetworkDiskCache>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_ThreadSafeNetworkDiskCache>, module, 0);
PythonQt::priv()->registerClass(&UrlHandler::staticMetaObject, "Clementine", PythonQtCreateObject<PythonQtWrapper_UrlHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_UrlHandler>, module, 0);
PythonQt::priv()->registerCPPClass("UrlHandler::LoadResult", "", "Clementine", PythonQtCreateObject<PythonQtWrapper_UrlHandler_LoadResult>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_UrlHandler_LoadResult>, module, 0);

}