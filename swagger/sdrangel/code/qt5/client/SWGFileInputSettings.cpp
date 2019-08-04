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


#include "SWGFileInputSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGFileInputSettings::SWGFileInputSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFileInputSettings::SWGFileInputSettings() {
    file_name = nullptr;
    m_file_name_isSet = false;
    acceleration_factor = 0;
    m_acceleration_factor_isSet = false;
    loop = 0;
    m_loop_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

SWGFileInputSettings::~SWGFileInputSettings() {
    this->cleanup();
}

void
SWGFileInputSettings::init() {
    file_name = new QString("");
    m_file_name_isSet = false;
    acceleration_factor = 0;
    m_acceleration_factor_isSet = false;
    loop = 0;
    m_loop_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

void
SWGFileInputSettings::cleanup() {
    if(file_name != nullptr) { 
        delete file_name;
    }



    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }


}

SWGFileInputSettings*
SWGFileInputSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFileInputSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&file_name, pJson["fileName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&acceleration_factor, pJson["accelerationFactor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&loop, pJson["loop"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
}

QString
SWGFileInputSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGFileInputSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(file_name != nullptr && *file_name != QString("")){
        toJsonValue(QString("fileName"), file_name, obj, QString("QString"));
    }
    if(m_acceleration_factor_isSet){
        obj->insert("accelerationFactor", QJsonValue(acceleration_factor));
    }
    if(m_loop_isSet){
        obj->insert("loop", QJsonValue(loop));
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

    return obj;
}

QString*
SWGFileInputSettings::getFileName() {
    return file_name;
}
void
SWGFileInputSettings::setFileName(QString* file_name) {
    this->file_name = file_name;
    this->m_file_name_isSet = true;
}

qint32
SWGFileInputSettings::getAccelerationFactor() {
    return acceleration_factor;
}
void
SWGFileInputSettings::setAccelerationFactor(qint32 acceleration_factor) {
    this->acceleration_factor = acceleration_factor;
    this->m_acceleration_factor_isSet = true;
}

qint32
SWGFileInputSettings::getLoop() {
    return loop;
}
void
SWGFileInputSettings::setLoop(qint32 loop) {
    this->loop = loop;
    this->m_loop_isSet = true;
}

qint32
SWGFileInputSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGFileInputSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGFileInputSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGFileInputSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGFileInputSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGFileInputSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGFileInputSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGFileInputSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}


bool
SWGFileInputSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(file_name && *file_name != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_acceleration_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_loop_isSet){
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
    }while(false);
    return isObjectUpdated;
}
}

