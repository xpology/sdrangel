/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.11.6
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGRemoteSinkSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGRemoteSinkSettings::SWGRemoteSinkSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRemoteSinkSettings::SWGRemoteSinkSettings() {
    nb_fec_blocks = 0;
    m_nb_fec_blocks_isSet = false;
    data_address = nullptr;
    m_data_address_isSet = false;
    data_port = 0;
    m_data_port_isSet = false;
    tx_delay = 0;
    m_tx_delay_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    filter_chain_hash = 0;
    m_filter_chain_hash_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

SWGRemoteSinkSettings::~SWGRemoteSinkSettings() {
    this->cleanup();
}

void
SWGRemoteSinkSettings::init() {
    nb_fec_blocks = 0;
    m_nb_fec_blocks_isSet = false;
    data_address = new QString("");
    m_data_address_isSet = false;
    data_port = 0;
    m_data_port_isSet = false;
    tx_delay = 0;
    m_tx_delay_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    filter_chain_hash = 0;
    m_filter_chain_hash_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

void
SWGRemoteSinkSettings::cleanup() {

    if(data_address != nullptr) { 
        delete data_address;
    }



    if(title != nullptr) { 
        delete title;
    }



    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



}

SWGRemoteSinkSettings*
SWGRemoteSinkSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRemoteSinkSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&nb_fec_blocks, pJson["nbFECBlocks"], "qint32", "");
    
    ::SWGSDRangel::setValue(&data_address, pJson["dataAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&data_port, pJson["dataPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tx_delay, pJson["txDelay"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&log2_decim, pJson["log2Decim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&filter_chain_hash, pJson["filterChainHash"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
}

QString
SWGRemoteSinkSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGRemoteSinkSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_nb_fec_blocks_isSet){
        obj->insert("nbFECBlocks", QJsonValue(nb_fec_blocks));
    }
    if(data_address != nullptr && *data_address != QString("")){
        toJsonValue(QString("dataAddress"), data_address, obj, QString("QString"));
    }
    if(m_data_port_isSet){
        obj->insert("dataPort", QJsonValue(data_port));
    }
    if(m_tx_delay_isSet){
        obj->insert("txDelay", QJsonValue(tx_delay));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(m_log2_decim_isSet){
        obj->insert("log2Decim", QJsonValue(log2_decim));
    }
    if(m_filter_chain_hash_isSet){
        obj->insert("filterChainHash", QJsonValue(filter_chain_hash));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }

    return obj;
}

qint32
SWGRemoteSinkSettings::getNbFecBlocks() {
    return nb_fec_blocks;
}
void
SWGRemoteSinkSettings::setNbFecBlocks(qint32 nb_fec_blocks) {
    this->nb_fec_blocks = nb_fec_blocks;
    this->m_nb_fec_blocks_isSet = true;
}

QString*
SWGRemoteSinkSettings::getDataAddress() {
    return data_address;
}
void
SWGRemoteSinkSettings::setDataAddress(QString* data_address) {
    this->data_address = data_address;
    this->m_data_address_isSet = true;
}

qint32
SWGRemoteSinkSettings::getDataPort() {
    return data_port;
}
void
SWGRemoteSinkSettings::setDataPort(qint32 data_port) {
    this->data_port = data_port;
    this->m_data_port_isSet = true;
}

qint32
SWGRemoteSinkSettings::getTxDelay() {
    return tx_delay;
}
void
SWGRemoteSinkSettings::setTxDelay(qint32 tx_delay) {
    this->tx_delay = tx_delay;
    this->m_tx_delay_isSet = true;
}

qint32
SWGRemoteSinkSettings::getRgbColor() {
    return rgb_color;
}
void
SWGRemoteSinkSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGRemoteSinkSettings::getTitle() {
    return title;
}
void
SWGRemoteSinkSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGRemoteSinkSettings::getLog2Decim() {
    return log2_decim;
}
void
SWGRemoteSinkSettings::setLog2Decim(qint32 log2_decim) {
    this->log2_decim = log2_decim;
    this->m_log2_decim_isSet = true;
}

qint32
SWGRemoteSinkSettings::getFilterChainHash() {
    return filter_chain_hash;
}
void
SWGRemoteSinkSettings::setFilterChainHash(qint32 filter_chain_hash) {
    this->filter_chain_hash = filter_chain_hash;
    this->m_filter_chain_hash_isSet = true;
}

qint32
SWGRemoteSinkSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGRemoteSinkSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGRemoteSinkSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGRemoteSinkSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGRemoteSinkSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGRemoteSinkSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGRemoteSinkSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGRemoteSinkSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGRemoteSinkSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGRemoteSinkSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}


bool
SWGRemoteSinkSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_nb_fec_blocks_isSet){
            isObjectUpdated = true; break;
        }
        if(data_address && *data_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_data_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tx_delay_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_log2_decim_isSet){
            isObjectUpdated = true; break;
        }
        if(m_filter_chain_hash_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_channel_index_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

