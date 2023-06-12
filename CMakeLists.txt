cmake_minimum_required(VERSION 3.25)
project(CinemaApplication)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_HEADERS_DIR ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR ${PROJECT_SOURCE_DIR}/sources)
include_directories(${PROJECT_HEADERS_DIR})
include_directories(${PROJECT_SOURCES_DIR})

set(SOURCE_FILES
        main.cpp
        ${PROJECT_HEADERS_DIR}/CinemaOld.h
        ${PROJECT_SOURCES_DIR}/CinemaOld.cpp
        ${PROJECT_HEADERS_DIR}/Bilhete.h
        ${PROJECT_SOURCES_DIR}/Bilhete.cpp
        sources/controllers/Controller.cpp headers/controllers/Controller.h sources/model/User.cpp sources/model/Seat.cpp sources/model/Movie.cpp sources/model/Showtime.cpp sources/model/Booking.cpp sources/model/PaymentDetails.cpp headers/model/Booking.h headers/model/Movie.h headers/model/Showtime.h headers/model/PaymentDetails.h headers/model/Seat.h headers/model/User.h headers/exceptions/UserNotFoundException.h headers/exceptions/InsuficcientCashException.h headers/exceptions/RoomAlreadyFullException.h headers/exceptions/InvalidCreditCardException.h headers/exceptions/SeatNoLongerAvailableException.h sources/exceptions/SeatNoLongerAvailableException.cpp sources/exceptions/InvalidCreditCardException.cpp sources/exceptions/RoomAlreadyFullException.cpp sources/exceptions/InsuficcientCashException.cpp sources/exceptions/UserNotFoundException.cpp mock/MockData.cpp mock/MockData.h headers/views/WelcomeScreen.h headers/views/MovieListView.h headers/views/ShowTimeView.h headers/views/SeatSelectionView.h headers/views/PaymentView.h headers/views/ConfirmationView.h sources/views/PaymentView.cpp sources/views/ConfirmationView.cpp sources/views/WelcomeScreen.cpp sources/views/MovieListView.cpp sources/views/ShowTimeView.cpp headers/model/Cinema.h sources/model/Cinema.cpp headers/model/UserContainer.h headers/model/ShowtimeContainer.h headers/model/MovieContainer.h sources/model/MovieContainer.cpp sources/model/UserContainer.cpp sources/model/ShowtimeContainer.cpp headers/views/View.h sources/views/View.cpp)


add_executable(CinemaApplication ${SOURCE_FILES})
